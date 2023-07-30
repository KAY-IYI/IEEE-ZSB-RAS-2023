#ifndef EXTERNAL_INT_PRIVATE_H
#define EXTERNAL_INT_PRIVATE_H

/* External Interrupt Control Registers */
#define MCUCR                       *((volatile u8*)0x55)
#define MCUCSR                      *((volatile u8*)0x54)
#define GICR                        *((volatile u8*)0x5B)
#define GIFR                        *((volatile u8*)0x5A)

/* External Interrupt Numbers */
#define INT0                        0
#define INT1                        1
#define INT2                        2
#define EXTERNAL_INT_NUM            3

/* MCUCR Register Bits */
#define EXTI_U8_ISC00               0
#define EXTI_U8_ISC01               1
#define EXTI_U8_ISC10               2
#define EXTI_U8_ISC11               3

/* MCUCSR Register Bits */          
#define EXTI_U8_ISC2                6

/* GICR Register Bits */
#define EXTI_U8_INT0                6
#define EXTI_U8_INT1                7
#define EXTI_U8_INT2                5

/* GIFR Register Bits */
#define EXTI_U8_INTF0               6
#define EXTI_U8_INTF1               7
#define EXTI_U8_INTF2               5

#define  EXTI_u8_ISC00_MASK         0x01

#endif /* EXTERNAL_INT_PRIVATE_H */
