#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice_trm.h"

/* LED */
#define LED__0__DM__MASK 0x07u
#define LED__0__DM__SHIFT 0u
#define LED__0__DR CYREG_PRT0_DR
#define LED__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define LED__0__HSIOM_MASK 0x0000000Fu
#define LED__0__HSIOM_SHIFT 0u
#define LED__0__INTCFG CYREG_PRT0_INTCFG
#define LED__0__INTSTAT CYREG_PRT0_INTSTAT
#define LED__0__MASK 0x01u
#define LED__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define LED__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define LED__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define LED__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define LED__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define LED__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define LED__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define LED__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define LED__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define LED__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define LED__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define LED__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define LED__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define LED__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define LED__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define LED__0__PC CYREG_PRT0_PC
#define LED__0__PC2 CYREG_PRT0_PC2
#define LED__0__PORT 0u
#define LED__0__PS CYREG_PRT0_PS
#define LED__0__SHIFT 0u
#define LED__DR CYREG_PRT0_DR
#define LED__INTCFG CYREG_PRT0_INTCFG
#define LED__INTSTAT CYREG_PRT0_INTSTAT
#define LED__MASK 0x01u
#define LED__PA__CFG0 CYREG_UDB_PA0_CFG0
#define LED__PA__CFG1 CYREG_UDB_PA0_CFG1
#define LED__PA__CFG10 CYREG_UDB_PA0_CFG10
#define LED__PA__CFG11 CYREG_UDB_PA0_CFG11
#define LED__PA__CFG12 CYREG_UDB_PA0_CFG12
#define LED__PA__CFG13 CYREG_UDB_PA0_CFG13
#define LED__PA__CFG14 CYREG_UDB_PA0_CFG14
#define LED__PA__CFG2 CYREG_UDB_PA0_CFG2
#define LED__PA__CFG3 CYREG_UDB_PA0_CFG3
#define LED__PA__CFG4 CYREG_UDB_PA0_CFG4
#define LED__PA__CFG5 CYREG_UDB_PA0_CFG5
#define LED__PA__CFG6 CYREG_UDB_PA0_CFG6
#define LED__PA__CFG7 CYREG_UDB_PA0_CFG7
#define LED__PA__CFG8 CYREG_UDB_PA0_CFG8
#define LED__PA__CFG9 CYREG_UDB_PA0_CFG9
#define LED__PC CYREG_PRT0_PC
#define LED__PC2 CYREG_PRT0_PC2
#define LED__PORT 0u
#define LED__PS CYREG_PRT0_PS
#define LED__SHIFT 0u

/* Pin_1 */
#define Pin_1__0__DM__MASK 0x38u
#define Pin_1__0__DM__SHIFT 3u
#define Pin_1__0__DR CYREG_PRT3_DR
#define Pin_1__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define Pin_1__0__HSIOM_MASK 0x000000F0u
#define Pin_1__0__HSIOM_SHIFT 4u
#define Pin_1__0__INTCFG CYREG_PRT3_INTCFG
#define Pin_1__0__INTSTAT CYREG_PRT3_INTSTAT
#define Pin_1__0__MASK 0x02u
#define Pin_1__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define Pin_1__0__OUT_SEL_SHIFT 2u
#define Pin_1__0__OUT_SEL_VAL 1u
#define Pin_1__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_1__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_1__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_1__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_1__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_1__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_1__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_1__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_1__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_1__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_1__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_1__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_1__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_1__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_1__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_1__0__PC CYREG_PRT3_PC
#define Pin_1__0__PC2 CYREG_PRT3_PC2
#define Pin_1__0__PORT 3u
#define Pin_1__0__PS CYREG_PRT3_PS
#define Pin_1__0__SHIFT 1u
#define Pin_1__DR CYREG_PRT3_DR
#define Pin_1__INTCFG CYREG_PRT3_INTCFG
#define Pin_1__INTSTAT CYREG_PRT3_INTSTAT
#define Pin_1__MASK 0x02u
#define Pin_1__PA__CFG0 CYREG_UDB_PA3_CFG0
#define Pin_1__PA__CFG1 CYREG_UDB_PA3_CFG1
#define Pin_1__PA__CFG10 CYREG_UDB_PA3_CFG10
#define Pin_1__PA__CFG11 CYREG_UDB_PA3_CFG11
#define Pin_1__PA__CFG12 CYREG_UDB_PA3_CFG12
#define Pin_1__PA__CFG13 CYREG_UDB_PA3_CFG13
#define Pin_1__PA__CFG14 CYREG_UDB_PA3_CFG14
#define Pin_1__PA__CFG2 CYREG_UDB_PA3_CFG2
#define Pin_1__PA__CFG3 CYREG_UDB_PA3_CFG3
#define Pin_1__PA__CFG4 CYREG_UDB_PA3_CFG4
#define Pin_1__PA__CFG5 CYREG_UDB_PA3_CFG5
#define Pin_1__PA__CFG6 CYREG_UDB_PA3_CFG6
#define Pin_1__PA__CFG7 CYREG_UDB_PA3_CFG7
#define Pin_1__PA__CFG8 CYREG_UDB_PA3_CFG8
#define Pin_1__PA__CFG9 CYREG_UDB_PA3_CFG9
#define Pin_1__PC CYREG_PRT3_PC
#define Pin_1__PC2 CYREG_PRT3_PC2
#define Pin_1__PORT 3u
#define Pin_1__PS CYREG_PRT3_PS
#define Pin_1__SHIFT 1u

/* StripLights_B_WS2811 */
#define StripLights_B_WS2811_ctrl__0__MASK 0x01u
#define StripLights_B_WS2811_ctrl__0__POS 0
#define StripLights_B_WS2811_ctrl__3__MASK 0x08u
#define StripLights_B_WS2811_ctrl__3__POS 3
#define StripLights_B_WS2811_ctrl__4__MASK 0x10u
#define StripLights_B_WS2811_ctrl__4__POS 4
#define StripLights_B_WS2811_ctrl__5__MASK 0x20u
#define StripLights_B_WS2811_ctrl__5__POS 5
#define StripLights_B_WS2811_ctrl__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define StripLights_B_WS2811_ctrl__CONTROL_REG CYREG_UDB_W8_CTL_03
#define StripLights_B_WS2811_ctrl__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_03
#define StripLights_B_WS2811_ctrl__COUNT_REG CYREG_UDB_W8_CTL_03
#define StripLights_B_WS2811_ctrl__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_03
#define StripLights_B_WS2811_ctrl__MASK 0x39u
#define StripLights_B_WS2811_ctrl__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define StripLights_B_WS2811_ctrl__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define StripLights_B_WS2811_ctrl__PERIOD_REG CYREG_UDB_W8_MSK_03
#define StripLights_B_WS2811_dshifter_u0__A0_A1_REG CYREG_UDB_CAT16_A_03
#define StripLights_B_WS2811_dshifter_u0__A0_REG CYREG_UDB_W8_A0_03
#define StripLights_B_WS2811_dshifter_u0__A1_REG CYREG_UDB_W8_A1_03
#define StripLights_B_WS2811_dshifter_u0__D0_D1_REG CYREG_UDB_CAT16_D_03
#define StripLights_B_WS2811_dshifter_u0__D0_REG CYREG_UDB_W8_D0_03
#define StripLights_B_WS2811_dshifter_u0__D1_REG CYREG_UDB_W8_D1_03
#define StripLights_B_WS2811_dshifter_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define StripLights_B_WS2811_dshifter_u0__F0_F1_REG CYREG_UDB_CAT16_F_03
#define StripLights_B_WS2811_dshifter_u0__F0_REG CYREG_UDB_W8_F0_03
#define StripLights_B_WS2811_dshifter_u0__F1_REG CYREG_UDB_W8_F1_03
#define StripLights_B_WS2811_dshifter_u0__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define StripLights_B_WS2811_dshifter_u0__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define StripLights_B_WS2811_pwm8_u0__16BIT_A0_REG CYREG_UDB_W16_A0_02
#define StripLights_B_WS2811_pwm8_u0__16BIT_A1_REG CYREG_UDB_W16_A1_02
#define StripLights_B_WS2811_pwm8_u0__16BIT_D0_REG CYREG_UDB_W16_D0_02
#define StripLights_B_WS2811_pwm8_u0__16BIT_D1_REG CYREG_UDB_W16_D1_02
#define StripLights_B_WS2811_pwm8_u0__16BIT_DP_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define StripLights_B_WS2811_pwm8_u0__16BIT_F0_REG CYREG_UDB_W16_F0_02
#define StripLights_B_WS2811_pwm8_u0__16BIT_F1_REG CYREG_UDB_W16_F1_02
#define StripLights_B_WS2811_pwm8_u0__A0_A1_REG CYREG_UDB_CAT16_A_02
#define StripLights_B_WS2811_pwm8_u0__A0_REG CYREG_UDB_W8_A0_02
#define StripLights_B_WS2811_pwm8_u0__A1_REG CYREG_UDB_W8_A1_02
#define StripLights_B_WS2811_pwm8_u0__D0_D1_REG CYREG_UDB_CAT16_D_02
#define StripLights_B_WS2811_pwm8_u0__D0_REG CYREG_UDB_W8_D0_02
#define StripLights_B_WS2811_pwm8_u0__D1_REG CYREG_UDB_W8_D1_02
#define StripLights_B_WS2811_pwm8_u0__DP_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define StripLights_B_WS2811_pwm8_u0__F0_F1_REG CYREG_UDB_CAT16_F_02
#define StripLights_B_WS2811_pwm8_u0__F0_REG CYREG_UDB_W8_F0_02
#define StripLights_B_WS2811_pwm8_u0__F1_REG CYREG_UDB_W8_F1_02
#define StripLights_B_WS2811_pwm8_u0__MSK_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define StripLights_B_WS2811_pwm8_u0__PER_DP_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define StripLights_B_WS2811_StatusReg__0__MASK 0x01u
#define StripLights_B_WS2811_StatusReg__0__POS 0
#define StripLights_B_WS2811_StatusReg__1__MASK 0x02u
#define StripLights_B_WS2811_StatusReg__1__POS 1
#define StripLights_B_WS2811_StatusReg__6__MASK 0x40u
#define StripLights_B_WS2811_StatusReg__6__POS 6
#define StripLights_B_WS2811_StatusReg__7__MASK 0x80u
#define StripLights_B_WS2811_StatusReg__7__POS 7
#define StripLights_B_WS2811_StatusReg__MASK 0xC3u
#define StripLights_B_WS2811_StatusReg__MASK_REG CYREG_UDB_W8_MSK_03
#define StripLights_B_WS2811_StatusReg__MASK_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define StripLights_B_WS2811_StatusReg__PER_ST_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define StripLights_B_WS2811_StatusReg__STATUS_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define StripLights_B_WS2811_StatusReg__STATUS_CNT_REG CYREG_UDB_CAT16_CTL_ST_03
#define StripLights_B_WS2811_StatusReg__STATUS_CONTROL_REG CYREG_UDB_CAT16_CTL_ST_03
#define StripLights_B_WS2811_StatusReg__STATUS_REG CYREG_UDB_W8_ST_03

/* StripLights_cisr */
#define StripLights_cisr__INTC_CLR_EN_REG CYREG_CM0_ICER
#define StripLights_cisr__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define StripLights_cisr__INTC_MASK 0x01u
#define StripLights_cisr__INTC_NUMBER 0u
#define StripLights_cisr__INTC_PRIOR_MASK 0xC0u
#define StripLights_cisr__INTC_PRIOR_NUM 3u
#define StripLights_cisr__INTC_PRIOR_REG CYREG_CM0_IPR0
#define StripLights_cisr__INTC_SET_EN_REG CYREG_CM0_ISER
#define StripLights_cisr__INTC_SET_PD_REG CYREG_CM0_ISPR

/* StripLights_fisr */
#define StripLights_fisr__INTC_CLR_EN_REG CYREG_CM0_ICER
#define StripLights_fisr__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define StripLights_fisr__INTC_MASK 0x04u
#define StripLights_fisr__INTC_NUMBER 2u
#define StripLights_fisr__INTC_PRIOR_MASK 0xC00000u
#define StripLights_fisr__INTC_PRIOR_NUM 3u
#define StripLights_fisr__INTC_PRIOR_REG CYREG_CM0_IPR0
#define StripLights_fisr__INTC_SET_EN_REG CYREG_CM0_ISER
#define StripLights_fisr__INTC_SET_PD_REG CYREG_CM0_ISPR

/* StripLights_StringSel */
#define StripLights_StringSel_Sync_ctrl_reg__0__MASK 0x01u
#define StripLights_StringSel_Sync_ctrl_reg__0__POS 0
#define StripLights_StringSel_Sync_ctrl_reg__1__MASK 0x02u
#define StripLights_StringSel_Sync_ctrl_reg__1__POS 1
#define StripLights_StringSel_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_UDB_W16_ACTL_02
#define StripLights_StringSel_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_UDB_W16_CTL_02
#define StripLights_StringSel_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_UDB_W16_CTL_02
#define StripLights_StringSel_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_UDB_W16_CTL_02
#define StripLights_StringSel_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_UDB_W16_CTL_02
#define StripLights_StringSel_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_UDB_W16_MSK_02
#define StripLights_StringSel_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_UDB_W16_MSK_02
#define StripLights_StringSel_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_UDB_W16_MSK_02
#define StripLights_StringSel_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_UDB_W16_MSK_02
#define StripLights_StringSel_Sync_ctrl_reg__2__MASK 0x04u
#define StripLights_StringSel_Sync_ctrl_reg__2__POS 2
#define StripLights_StringSel_Sync_ctrl_reg__3__MASK 0x08u
#define StripLights_StringSel_Sync_ctrl_reg__3__POS 3
#define StripLights_StringSel_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_02
#define StripLights_StringSel_Sync_ctrl_reg__CONTROL_REG CYREG_UDB_W8_CTL_02
#define StripLights_StringSel_Sync_ctrl_reg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_02
#define StripLights_StringSel_Sync_ctrl_reg__COUNT_REG CYREG_UDB_W8_CTL_02
#define StripLights_StringSel_Sync_ctrl_reg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_02
#define StripLights_StringSel_Sync_ctrl_reg__MASK 0x0Fu
#define StripLights_StringSel_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define StripLights_StringSel_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_02
#define StripLights_StringSel_Sync_ctrl_reg__PERIOD_REG CYREG_UDB_W8_MSK_02

/* Miscellaneous */
#define CY_PROJECT_NAME "LED STRIP TEST"
#define CY_VERSION "PSoC Creator  4.0 Update 1"
#define CYDEV_BANDGAP_VOLTAGE 1.024
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 12u
#define CYDEV_CHIP_DIE_PSOC5LP 19u
#define CYDEV_CHIP_DIE_PSOC5TM 20u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 4u
#define CYDEV_CHIP_FAMILY_FM3 5u
#define CYDEV_CHIP_FAMILY_FM4 6u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x04C81193u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 12u
#define CYDEV_CHIP_MEMBER_4C 18u
#define CYDEV_CHIP_MEMBER_4D 8u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 13u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 11u
#define CYDEV_CHIP_MEMBER_4I 17u
#define CYDEV_CHIP_MEMBER_4J 9u
#define CYDEV_CHIP_MEMBER_4K 10u
#define CYDEV_CHIP_MEMBER_4L 16u
#define CYDEV_CHIP_MEMBER_4M 15u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4P 14u
#define CYDEV_CHIP_MEMBER_4Q 7u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 20u
#define CYDEV_CHIP_MEMBER_5B 19u
#define CYDEV_CHIP_MEMBER_FM3 24u
#define CYDEV_CHIP_MEMBER_FM4 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 21u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 22u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 23u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_Disallowed
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DFT_SELECT_CLK0 1u
#define CYDEV_DFT_SELECT_CLK1 2u
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_IMO_TRIMMED_BY_USB 0u
#define CYDEV_IMO_TRIMMED_BY_WCO 0u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 2
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_WDT_GENERATE_ISR 1u
#define CYIPBLOCK_M0S8_CTBM_VERSION 0
#define CYIPBLOCK_m0s8cpuss_VERSION 0
#define CYIPBLOCK_m0s8csd_VERSION 0
#define CYIPBLOCK_m0s8gpio2_VERSION 0
#define CYIPBLOCK_m0s8hsiom4a_VERSION 0
#define CYIPBLOCK_m0s8lcd_VERSION 0
#define CYIPBLOCK_m0s8lpcomp_VERSION 0
#define CYIPBLOCK_m0s8pclk_VERSION 0
#define CYIPBLOCK_m0s8sar_VERSION 0
#define CYIPBLOCK_m0s8scb_VERSION 0
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 0
#define CYIPBLOCK_m0s8udbif_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 2
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
