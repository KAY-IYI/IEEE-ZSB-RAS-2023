/*********************************************************************************************/
/*************************** Name     :  Karam Yaseen   **************************************/
/*************************** Data     :  29/7/2023      **************************************/
/*************************** SWC      :  EXTI           **************************************/
/*************************** E_Mail   :  karamyaseen725@gmail.com    *************************/
/*************************** version  :  1.0            **************************************/
/*********************************************************************************************/
#ifndef EXTERNAL_INT_CONFIG_H
#define EXTERNAL_INT_CONFIG_H

/* External Interrupt Modes */
#define EXTI_FALLING_EDGE      0
#define EXTI_RISING_EDGE       1
#define EXTI_LOW_LEVEL         2
#define EXTI_ANY_CHANGE        3

#define EXTI_Modes_NUM         4

/* External Interrupt Pins */
#define EXTI_INT0              0
#define EXTI_INT1              1
#define EXTI_INT2              2
#define EXTERNAL_INT_NUM       3

/* Register Definitions */    
#define EXTI_REG_MODE          MCUCR
#define EXTI_REG_ISC           MCUCR
#define EXTI_REG_GICR          GICR

/* Bit Definitions */
#define EXTI_U8_ISC00          0
#define EXTI_U8_ISC01          1
#define EXTI_U8_ISC10          2
#define EXTI_U8_ISC11          3
 #define EXTI_U8_INT0        6
 #define EXTI_U8_INT1        7
 #define EXTI_U8_INT2        5

#endif /* EXTERNAL_INT_CONFIG_H */
