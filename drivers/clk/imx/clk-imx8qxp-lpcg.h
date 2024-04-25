/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2018 NXP
 *   Dong Aisheng <aisheng.dong@nxp.com>
 */

#ifndef _IMX8QXP_LPCG_H
#define _IMX8QXP_LPCG_H

/*LSIO SS */
#define LSIO_PWM_0_LPCG			0x00000
#define LSIO_PWM_1_LPCG			0x10000
#define LSIO_PWM_2_LPCG			0x20000
#define LSIO_PWM_3_LPCG			0x30000
#define LSIO_PWM_4_LPCG			0x40000
#define LSIO_PWM_5_LPCG			0x50000
#define LSIO_PWM_6_LPCG			0x60000
#define LSIO_PWM_7_LPCG			0x70000
#define LSIO_GPIO_0_LPCG		0x80000
#define LSIO_GPIO_1_LPCG		0x90000
#define LSIO_GPIO_2_LPCG		0xa0000
#define LSIO_GPIO_3_LPCG		0xb0000
#define LSIO_GPIO_4_LPCG		0xc0000
#define LSIO_GPIO_5_LPCG		0xd0000
#define LSIO_GPIO_6_LPCG		0xe0000
#define LSIO_GPIO_7_LPCG		0xf0000
#define LSIO_FSPI_0_LPCG		0x120000
#define LSIO_FSPI_1_LPCG		0x130000
#define LSIO_GPT_0_LPCG			0x140000
#define LSIO_GPT_1_LPCG			0x150000
#define LSIO_GPT_2_LPCG			0x160000
#define LSIO_GPT_3_LPCG			0x170000
#define LSIO_GPT_4_LPCG			0x180000
#define LSIO_OCRAM_LPCG			0x190000
#define LSIO_KPP_LPCG			0x1a0000
#define LSIO_ROMCP_LPCG			0x100000

/* Connectivity SS */
#define CONN_USDHC_0_LPCG		0x00000
#define CONN_USDHC_1_LPCG		0x10000
#define CONN_USDHC_2_LPCG		0x20000
#define CONN_ENET_0_LPCG		0x30000
#define CONN_ENET_1_LPCG		0x40000
#define CONN_DTCP_LPCG			0x50000
#define CONN_MLB_LPCG			0x60000
#define CONN_USB_2_LPCG			0x70000
#define CONN_USB_3_LPCG			0x80000
#define CONN_NAND_LPCG			0x90000
#define CONN_EDMA_LPCG			0xa0000

/* ADMA SS */
#define ADMA_ASRC_0_LPCG		0x400000
#define ADMA_ESAI_0_LPCG		0x410000
#define ADMA_SPDIF_0_LPCG		0x420000
#define ADMA_SAI_0_LPCG			0x440000
#define ADMA_SAI_1_LPCG			0x450000
#define ADMA_SAI_2_LPCG			0x460000
#define ADMA_SAI_3_LPCG			0x470000
#define ADMA_GPT_5_LPCG			0x4b0000
#define ADMA_GPT_6_LPCG			0x4c0000
#define ADMA_GPT_7_LPCG			0x4d0000
#define ADMA_GPT_8_LPCG			0x4e0000
#define ADMA_GPT_9_LPCG			0x4f0000
#define ADMA_GPT_10_LPCG		0x500000
#define ADMA_HIFI_LPCG			0x580000
#define ADMA_OCRAM_LPCG			0x590000
#define ADMA_EDMA_0_LPCG		0x5f0000
#define ADMA_ASRC_1_LPCG		0xc00000
#define ADMA_SAI_4_LPCG			0xc20000
#define ADMA_SAI_5_LPCG			0xc30000
#define ADMA_AMIX_LPCG			0xc40000
#define ADMA_MQS_LPCG			0xc50000
#define ADMA_ACM_LPCG			0xc60000
#define ADMA_REC_CLK0_LPCG		0xd00000
#define ADMA_REC_CLK1_LPCG		0xd10000
#define ADMA_PLL_CLK0_LPCG		0xd20000
#define ADMA_PLL_CLK1_LPCG		0xd30000
#define ADMA_MCLKOUT0_LPCG		0xd50000
#define ADMA_MCLKOUT1_LPCG		0xd60000
#define ADMA_EDMA_1_LPCG		0xdf0000
#define ADMA_LPSPI_0_LPCG		0x1400000
#define ADMA_LPSPI_1_LPCG		0x1410000
#define ADMA_LPSPI_2_LPCG		0x1420000
#define ADMA_LPSPI_3_LPCG		0x1430000
#define ADMA_LPUART_0_LPCG		0x1460000
#define ADMA_LPUART_1_LPCG		0x1470000
#define ADMA_LPUART_2_LPCG		0x1480000
#define ADMA_LPUART_3_LPCG		0x1490000
#define ADMA_LCD_LPCG			0x1580000
#define ADMA_PWM_LPCG			0x1590000
#define ADMA_LPI2C_0_LPCG		0x1c00000
#define ADMA_LPI2C_1_LPCG		0x1c10000
#define ADMA_LPI2C_2_LPCG		0x1c20000
#define ADMA_LPI2C_3_LPCG		0x1c30000
#define ADMA_ADC_0_LPCG			0x1c80000
#define ADMA_FTM_0_LPCG			0x1ca0000
#define ADMA_FTM_1_LPCG			0x1cb0000
#define ADMA_FLEXCAN_0_LPCG		0x1cd0000
#define ADMA_FLEXCAN_1_LPCG		0x1ce0000
#define ADMA_FLEXCAN_2_LPCG		0x1cf0000

#endif /* _IMX8QXP_LPCG_H */
