/*******************************************************************************
* File Name: serial_rx.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_serial_rx_H) /* Pins serial_rx_H */
#define CY_PINS_serial_rx_H

#include "cytypes.h"
#include "cyfitter.h"
#include "serial_rx_aliases.h"


/***************************************
*     Data Struct Definitions
***************************************/

/**
* \addtogroup group_structures
* @{
*/
    
/* Structure for sleep mode support */
typedef struct
{
    uint32 pcState; /**< State of the port control register */
    uint32 sioState; /**< State of the SIO configuration */
    uint32 usbState; /**< State of the USBIO regulator */
} serial_rx_BACKUP_STRUCT;

/** @} structures */


/***************************************
*        Function Prototypes             
***************************************/
/**
* \addtogroup group_general
* @{
*/
uint8   serial_rx_Read(void);
void    serial_rx_Write(uint8 value);
uint8   serial_rx_ReadDataReg(void);
#if defined(serial_rx__PC) || (CY_PSOC4_4200L) 
    void    serial_rx_SetDriveMode(uint8 mode);
#endif
void    serial_rx_SetInterruptMode(uint16 position, uint16 mode);
uint8   serial_rx_ClearInterrupt(void);
/** @} general */

/**
* \addtogroup group_power
* @{
*/
void serial_rx_Sleep(void); 
void serial_rx_Wakeup(void);
/** @} power */


/***************************************
*           API Constants        
***************************************/
#if defined(serial_rx__PC) || (CY_PSOC4_4200L) 
    /* Drive Modes */
    #define serial_rx_DRIVE_MODE_BITS        (3)
    #define serial_rx_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - serial_rx_DRIVE_MODE_BITS))

    /**
    * \addtogroup group_constants
    * @{
    */
        /** \addtogroup driveMode Drive mode constants
         * \brief Constants to be passed as "mode" parameter in the serial_rx_SetDriveMode() function.
         *  @{
         */
        #define serial_rx_DM_ALG_HIZ         (0x00u) /**< \brief High Impedance Analog   */
        #define serial_rx_DM_DIG_HIZ         (0x01u) /**< \brief High Impedance Digital  */
        #define serial_rx_DM_RES_UP          (0x02u) /**< \brief Resistive Pull Up       */
        #define serial_rx_DM_RES_DWN         (0x03u) /**< \brief Resistive Pull Down     */
        #define serial_rx_DM_OD_LO           (0x04u) /**< \brief Open Drain, Drives Low  */
        #define serial_rx_DM_OD_HI           (0x05u) /**< \brief Open Drain, Drives High */
        #define serial_rx_DM_STRONG          (0x06u) /**< \brief Strong Drive            */
        #define serial_rx_DM_RES_UPDWN       (0x07u) /**< \brief Resistive Pull Up/Down  */
        /** @} driveMode */
    /** @} group_constants */
#endif

/* Digital Port Constants */
#define serial_rx_MASK               serial_rx__MASK
#define serial_rx_SHIFT              serial_rx__SHIFT
#define serial_rx_WIDTH              1u

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in serial_rx_SetInterruptMode() function.
     *  @{
     */
        #define serial_rx_INTR_NONE      ((uint16)(0x0000u)) /**< \brief Disabled             */
        #define serial_rx_INTR_RISING    ((uint16)(0x5555u)) /**< \brief Rising edge trigger  */
        #define serial_rx_INTR_FALLING   ((uint16)(0xaaaau)) /**< \brief Falling edge trigger */
        #define serial_rx_INTR_BOTH      ((uint16)(0xffffu)) /**< \brief Both edge trigger    */
    /** @} intrMode */
/** @} group_constants */

/* SIO LPM definition */
#if defined(serial_rx__SIO)
    #define serial_rx_SIO_LPM_MASK       (0x03u)
#endif

/* USBIO definitions */
#if !defined(serial_rx__PC) && (CY_PSOC4_4200L)
    #define serial_rx_USBIO_ENABLE               ((uint32)0x80000000u)
    #define serial_rx_USBIO_DISABLE              ((uint32)(~serial_rx_USBIO_ENABLE))
    #define serial_rx_USBIO_SUSPEND_SHIFT        CYFLD_USBDEVv2_USB_SUSPEND__OFFSET
    #define serial_rx_USBIO_SUSPEND_DEL_SHIFT    CYFLD_USBDEVv2_USB_SUSPEND_DEL__OFFSET
    #define serial_rx_USBIO_ENTER_SLEEP          ((uint32)((1u << serial_rx_USBIO_SUSPEND_SHIFT) \
                                                        | (1u << serial_rx_USBIO_SUSPEND_DEL_SHIFT)))
    #define serial_rx_USBIO_EXIT_SLEEP_PH1       ((uint32)~((uint32)(1u << serial_rx_USBIO_SUSPEND_SHIFT)))
    #define serial_rx_USBIO_EXIT_SLEEP_PH2       ((uint32)~((uint32)(1u << serial_rx_USBIO_SUSPEND_DEL_SHIFT)))
    #define serial_rx_USBIO_CR1_OFF              ((uint32)0xfffffffeu)
#endif


/***************************************
*             Registers        
***************************************/
/* Main Port Registers */
#if defined(serial_rx__PC)
    /* Port Configuration */
    #define serial_rx_PC                 (* (reg32 *) serial_rx__PC)
#endif
/* Pin State */
#define serial_rx_PS                     (* (reg32 *) serial_rx__PS)
/* Data Register */
#define serial_rx_DR                     (* (reg32 *) serial_rx__DR)
/* Input Buffer Disable Override */
#define serial_rx_INP_DIS                (* (reg32 *) serial_rx__PC2)

/* Interrupt configuration Registers */
#define serial_rx_INTCFG                 (* (reg32 *) serial_rx__INTCFG)
#define serial_rx_INTSTAT                (* (reg32 *) serial_rx__INTSTAT)

/* "Interrupt cause" register for Combined Port Interrupt (AllPortInt) in GSRef component */
#if defined (CYREG_GPIO_INTR_CAUSE)
    #define serial_rx_INTR_CAUSE         (* (reg32 *) CYREG_GPIO_INTR_CAUSE)
#endif

/* SIO register */
#if defined(serial_rx__SIO)
    #define serial_rx_SIO_REG            (* (reg32 *) serial_rx__SIO)
#endif /* (serial_rx__SIO_CFG) */

/* USBIO registers */
#if !defined(serial_rx__PC) && (CY_PSOC4_4200L)
    #define serial_rx_USB_POWER_REG       (* (reg32 *) CYREG_USBDEVv2_USB_POWER_CTRL)
    #define serial_rx_CR1_REG             (* (reg32 *) CYREG_USBDEVv2_CR1)
    #define serial_rx_USBIO_CTRL_REG      (* (reg32 *) CYREG_USBDEVv2_USB_USBIO_CTRL)
#endif    
    
    
/***************************************
* The following code is DEPRECATED and 
* must not be used in new designs.
***************************************/
/**
* \addtogroup group_deprecated
* @{
*/
#define serial_rx_DRIVE_MODE_SHIFT       (0x00u)
#define serial_rx_DRIVE_MODE_MASK        (0x07u << serial_rx_DRIVE_MODE_SHIFT)
/** @} deprecated */

#endif /* End Pins serial_rx_H */


/* [] END OF FILE */