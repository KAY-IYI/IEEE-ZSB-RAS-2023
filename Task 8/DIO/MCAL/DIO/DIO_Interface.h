/*********************************************************************************************/
/*************************** Name     :  Karam Yaseen   **************************************/
/*************************** Data     :  29/4/2023      **************************************/
/*************************** SWC      :  DIO            **************************************/
/*************************** E_Mail   :  karamyaseen725@gmail.com    *************************/
/*************************** version  :  1.0            **************************************/
/*********************************************************************************************/
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H

#include "../../LIB/STD_TYPES.h"

/* =========================================================================================== */
/*                                Macros DEfinitions                                           */ 
/* =========================================================================================== */

/* MACROS FOR PORTS */
    #define DIO_u8_PORTA   0
    #define DIO_u8_PORTB   1
    #define DIO_u8_PORTD   2
    #define DIO_u8_PORTC   3

/* MACROS FOR PINS */
    #define DIO_u8_PIN0     0
    #define DIO_u8_PIN1     1
    #define DIO_u8_PIN2     2
    #define DIO_u8_PIN3     3
    #define DIO_u8_PIN4     4
    #define DIO_u8_PIN5     5
    #define DIO_u8_PIN6     6
    #define DIO_u8_PIN7     7

/* MACROS FOR PINS DIRECTION */    
    #define DIO_u8_OUTPUT  1
    #define DIO_u8_INPUT   0

/* MACROS FOR PINS VALUE */        
    #define DIO_u8_HIGH    1
    #define DIO_u8_LOW     0

/* =========================================================================================== */
/*                                Function modules                                             */
/* =========================================================================================== */
   
    void DIO_VoidInit                   (void);

    u8 DIO_u8SetPinDirection            (u8 Copy_u8_PortId,u8 Copy_u8_PinId,u8 Copy_u8_PinDirection);

    u8 DIO_u8SetPinValue                (u8 Copy_u8_PortId,u8 Copy_u8_PinId,u8 Copy_u8_PinValue);

    u8 DIO_u8GetPinValue                (u8 Copy_u8_PortId,u8 Copy_u8_PinId,u8 * Copy_pu8_ReturnPinValue);

    u8 DIO_u8SetPortDirection           (u8 Copy_u8_PortId,u8 Copy_u8_PortDirection);

    u8 DIO_u8SetPortValue               (u8 Copy_u8_PortId,u8 Copy_Port_Value);

    u8 DIO_u8GetPortValue               (u8 Copy_u8_PortId,u8 * Copy_pu8_ReturnPortValue);

#endif
