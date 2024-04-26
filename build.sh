#!/bin/bash

ENV="/opt/atk-dlmp135-toolchain/gcc-arm-none-linux-gnueabihf/bin"
export PATH=$PATH:$ENV

BUILD_DIR="$PWD/build"
DEPLOY_DIR="$PWD/deploy"

if [ ! -e "$BUILD_DIR" ]; then
    mkdir $BUILD_DIR
fi
if [ ! -e "${DEPLOY_DIR}" ]; then
    mkdir ${DEPLOY_DIR}
fi

if [ "$1" == "clean" ]; then
    echo "clean kernel"
    make distclean #清除编译
    echo "clean build"
    rm -rf ${BUILD_DIR}
    echo "clean deploy"
    rm -rf ${DEPLOY_DIR}
    exit 0
fi

#选择配置文件为stm32mp1_atk_defconfig
make ARCH=arm O="${BUILD_DIR}" CROSS_COMPILE=arm-none-linux-gnueabihf- stm32mp1_atk_defconfig

#编译内核
echo "make kernel..."
make ARCH=arm O="${BUILD_DIR}" CROSS_COMPILE=arm-none-linux-gnueabihf- uImage vmlinux dtbs LOADADDR=0xC2000040 -j$(($(nproc)+1))

#编译内核模块
echo "make modules..."
make ARCH=arm O="${BUILD_DIR}" CROSS_COMPILE=arm-none-linux-gnueabihf- modules -j$(($(nproc)+1))

#将编译好的模块安装到$BUILD_DIR目录，通过INSTALL_MOD_STRIP=1移除模块调试信息
echo "install modules..."
make ARCH=arm O="${BUILD_DIR}" CROSS_COMPILE=arm-none-linux-gnueabihf- modules_install INSTALL_MOD_PATH=$BUILD_DIR INSTALL_MOD_STRIP=1 -j$(($(nproc)+1))
#删除模块目录下的source目录
rm -rf $BUILD_DIR/lib/modules/5.15.24/source
#删除模块的目录下的build目录
rm -rf $BUILD_DIR/lib/modules/5.15.24/build

#跳转到模块目录
cd $BUILD_DIR/lib/modules
#压缩内核模块
echo "copy modules to deploy"
tar -cf ${DEPLOY_DIR}/modules.tar .
# cd -
# rm -rf $BUILD_DIR/lib

#拷贝uImage到../build目录
echo "copy uImage to deploy"
cp $BUILD_DIR/arch/arm/boot/uImage $DEPLOY_DIR

#拷贝所有编译的设备树文件到当前的../build目录下
echo "copy dtb to deploy"
cp $BUILD_DIR/arch/arm/boot/dts/stm32mp135d-aaron*.dtb $DEPLOY_DIR

echo "编译完成请查看 $DEPLOY_DIR 目录"
