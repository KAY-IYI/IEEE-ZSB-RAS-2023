/*********************************************************************************************/
/*************************** Name     :  Karam Yaseen   **************************************/
/*************************** Data     :  29/4/2023      **************************************/
/*************************** SWC      :  DIO            **************************************/
/*************************** E_Mail   :  karamyaseen725@gmail.com    *************************/
/*************************** version  :  1.0            **************************************/
/*********************************************************************************************/

#ifndef DIO_REGISTERS_H
#define DIO_REGISTERS_H

#include"../../LIB/STD_TYPES.h"

/****************** PORTA Registers ************************/
#define DIO_u8_PORTA_REG	                              *((u8 volatile *)0x3B)  
#define DIO_u8_DDRA_REG                                   *((u8 volatile *)0x3A)  
#define DIO_u8_PINA_REG	                                  *((u8 volatile *)0x39)

/****************** PORTB Registers ************************/
#define DIO_u8_PORTB_REG	                              *((u8 volatile *)0x38)  
#define DIO_u8_DDRB_REG                                   *((u8 volatile *)0x37)  
#define DIO_u8_PINB_REG	                                  *((u8 volatile *)0x36)

/****************** PORTC Registers ************************/
#define DIO_u8_PORTC_REG	                              *((u8 volatile *)0x35)  
#define DIO_u8_DDRC_REG                                   *((u8 volatile *)0x34)  
#define DIO_u8_PINC_REG	                                  *((u8 volatile *)0x33)

/****************** PORTD Registers ************************/
#define DIO_u8_PORTD_REG	                              *((u8 volatile *)0x32)  
#define DIO_u8_DDRD_REG                                   *((u8 volatile *)0x31)  
#define DIO_u8_PIND_REG	                                  *((u8 volatile *)0x30)

/****************** Pins Direction & Values ****************/
#define DIO_u8_INITIAL_OUTPUT                             1
#define DIO_u8_INITIAL_INPUT                              0

#define DIO_u8_OUTPUT_LOW                                 0
#define DIO_u8_OUTPUT_HIGH                                1
#define DIO_u8_INPUT_FLOATING                             0
#define DIO_u8_INTPUT_PULLUP                              1

#define CONC(b7,b6,b5,b4,b3,b2,b1,b0)                     CONC_Help(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONC_Help(b7,b6,b5,b4,b3,b2,b1,b0)                0b##b7##b6##b5##b4##b3##b2##b1##b0

#endif
