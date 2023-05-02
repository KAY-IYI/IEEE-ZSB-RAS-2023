/*********************************************************************************************/
/*************************** Name     :  Karam Yaseen   **************************************/
/*************************** Data     :  29/4/2023      **************************************/
/*************************** SWC      :  DIO            **************************************/
/*************************** E_Mail   :  karamyaseen725@gmail.com    *************************/
/*************************** version  :  1.0            **************************************/
/*********************************************************************************************/

#ifndef DIO_PRIVATE_H
#define DIO_PRIVATE_H

#include"../../LIB/STD_TYPES.h"

#include"DIO_Register.h"
#include"DIO_Confiq.h"

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
