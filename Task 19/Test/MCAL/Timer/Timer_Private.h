/*********************************************************************************/
/***************** Name    :   Karam Yaseen  *************************************/
/***************** Date    :   11-08-2023    *************************************/
/***************** SWC     :   Timer         *************************************/
/***************** E_Mail   :  karamyaseen725@gmail.com    *************************/
/***************** Version :   1.0           *************************************/
/*********************************************************************************/
#ifndef TIMER_PRIVATE_H
#define TIMER_PRIVATE_H
#include "../../LIB/STD_TYPES.h"

/*****************************Registers Addresses*********************/
#define TIMER_U8_TIMSK_REG              *((volatile u8 *)0x59)
#define TIMER_U8_TIFR_REG               *((volatile u8 *)0x58)

#define TIMER0_U8_TCCR0_REG             *((volatile u8 *)0x53)  
#define TIMER0_U8_TCNT0_REG             *((volatile u8 *)0x52)
#define TIMER0_U8_OCR0_REG              *((volatile u8 *)0x5c)

/*Timer1*/
#define TIMER1_U8_TCCR1A_REG			*((volatile u8*)0X4F)
#define TIMER1_U8_TCCR1B_REG			*((volatile u8*)0X4E)
#define TIMER1_U8_TCNT1H_REG            *((volatile u8 *)(0x4D))
#define TIMER1_U8_TCNT1L_REG            *((volatile u8 *)(0x4C))
#define TIMER1_U8_TCNT1_REG			    *((volatile u16*)0X4C)    /* u16 for HIGH & LOW */
#define TIMER1_U8_OCR1AL_REG            *((volatile u8 *)(0x4A))
#define TIMER1_U8_OCR1AH_REG            *((volatile u8 *)(0x4B))
#define TIMER1_U8_OCR1A_REG			    *((volatile u16*)0X4A)
#define TIMER1_U8_OCR1BL_REG            *((volatile u8 *)(0x48))
#define TIMER1_U8_OCR1BH_REG            *((volatile u8 *)(0x49))
#define TIMER1_U8_OCR1B_REG			    *((volatile u16*)0X48)
#define TIMER1_U8_ICR1H_REG             *((volatile u8 *)(0x47))
#define TIMER1_U8_ICR1L_REG             *((volatile u8 *)(0x46))
#define TIMER1_U8_ICR1_REG		    	*((volatile u16*)0X46)

#define TIMER0_U8_TCCR0_FOC0            7
#define TIMER0_U8_TCCR0_WGM00	     	6
#define TIMER0_U8_TCCR0_COM01	    	5
#define TIMER0_U8_TCCR0_COM00	    	4
#define TIMER0_U8_TCCR0_WGM01	    	3
#define TIMER0_U8_TCCR0_CS02            2
#define TIMER0_U8_TCCR0_CS01	    	1
#define TIMER0_U8_TCCR0_CS00	    	0

/*Timer1*/
#define TIMER1_U8_TCCR1A_COM1A1		    7
#define TIMER1_U8_TCCR1A_COM1A0		    6
#define TIMER1_U8_TCCR1A_COM1B1		    5
#define TIMER1_U8_TCCR1A_COM1B0		    4
#define TIMER1_U8_TCCR1A_WGM10		    0
#define TIMER1_U8_TCCR1A_WGM11		    1
#define TIMER1_U8_TCCR1B_WGM12		    3
#define TIMER1_U8_TCCR1B_WGM13		    4

#define OCIE1A                          4
#define OCIE1B                          3
#define TOIE1                           2
#define TOV1                            2       

#define TIMER1_U8_TCCR1B_ICNC1			7
#define TIMER1_U8_TCCR1B_ICES1			6

#define TIMER_U8_TIMSK_TOIE0            0
#define TIMER_U8_TIMSK_OCIE0            1
#define TIMER_U8_TIFR_TOV0              0
#define TIMER_U8_TIFR_OCF0              1


/*****************************Options Macros**********************/
#define TIMER_NORMAL_MODE   	        0
#define TIMER_CTC_MODE	    	        1
#define TIMER_PWM_MODE                  2
#define TIMER_FAST_PWM_MODE             3

#define TIMER_DISABLE				    0
#define TIMER_ENABLE		            1

// #define TIMER_FALLING_EDGE           0
// #define TIMER_RISING_EDGE            1

#define TIMER_NO_CLOCK_SOURCE	 	             0
#define TIMER_NO_PRESCALER_FACTOR 	             1
#define TIMER_DIVISION_FACTOR_8	 	             2
#define TIMER_DIVISION_FACTOR_64	             3
#define TIMER_DIVISION_FACTOR_256	             4
#define TIMER_DIVISION_FACTOR_1024	             5
#define TIMER_T0_EXTERNAL_CLOCK_SOURCE_FALLING   6
#define TIMER_T0_EXTERNAL_CLOCK_SOURCE_RISING    7

#define TIMER_PRESCALER_MASK				     0XF8 /* This Value also could use for bit masking */
#define SERVO_MAX_ANGLE                          360

#endif
