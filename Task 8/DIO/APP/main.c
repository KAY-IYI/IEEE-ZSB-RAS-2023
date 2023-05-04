/*
 * main.c
 *
 *  Created on: Apr 29, 2023
 *      Author: Karam
 */
#include "../MCAL/DIO/DIO_Private.h"
#include "../MCAL/DIO/DIO_Confiq.h"

#include "../LIB/BIT_MATH.h"
#include "../lib/STD_TYPES.h"
#include <util/delay.h>


int main(){

	DIO_VoidInit();

	/*******************Pins Directions********************/
	DIO_eun_SetPinDirection(DIO_u8_PORTA,DIO_u8_PIN0,DIO_u8_INPUT);
	DIO_eun_SetPinDirection(DIO_u8_PORTA,DIO_u8_PIN5,DIO_u8_OUTPUT);

	DIO_eun_SetPinDirection(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_INPUT );
	DIO_eun_SetPinDirection(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_OUTPUT);

	DIO_eun_SetPinDirection(DIO_u8_PORTC,DIO_u8_PIN0,DIO_u8_INPUT);
	DIO_eun_SetPinDirection(DIO_u8_PORTC,DIO_u8_PIN3,DIO_u8_OUTPUT);

	DIO_eun_SetPortDirection(DIO_u8_PORTD,DIO_u8_OUTPUT);

	u8 switchRead1;
	u8 switchRead2;
	u8 switchRead3;

	while(1){
		DIO_enu_GetPinValue(DIO_u8_PORTA,DIO_u8_PIN0,&switchRead2);
		DIO_enu_GetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,&switchRead1);
		DIO_enu_GetPinValue(DIO_u8_PORTC,DIO_u8_PIN0,&switchRead3);

		if(switchRead1 == DIO_u8_HIGH)
		{
			DIO_enu_SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_HIGH);
		}else{
			DIO_enu_SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_LOW);
			}

		if(switchRead2 == DIO_u8_HIGH)
				{
					DIO_enu_SetPinValue(DIO_u8_PORTA,DIO_u8_PIN5,DIO_u8_HIGH);
				}else{
					DIO_enu_SetPinValue(DIO_u8_PORTA,DIO_u8_PIN5,DIO_u8_LOW);
				}
		if(switchRead3 == DIO_u8_HIGH)
				{
					DIO_enu_SetPinValue(DIO_u8_PORTC,DIO_u8_PIN3,DIO_u8_HIGH);
				}else{
					DIO_enu_SetPinValue(DIO_u8_PORTC,DIO_u8_PIN3,DIO_u8_LOW);
				}

		if(switchRead1== DIO_u8_HIGH || switchRead2== DIO_u8_HIGH || switchRead3 == DIO_u8_HIGH)
				{
					//0
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_HIGH);
					//1
					_delay_ms(500);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_LOW);
					//2
					_delay_ms(500);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_HIGH);
					//3
					_delay_ms(500);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_HIGH);
					//4
					_delay_ms(500);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_LOW);
					//5
					_delay_ms(500);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_HIGH);
					//6
					_delay_ms(500);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_HIGH);
					//7
					_delay_ms(500);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_LOW);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_HIGH);
					//8
					_delay_ms(500);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
					DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_HIGH);
				}else{
					DIO_enu_SetPortValue(DIO_u8_PORTD,DIO_u8_LOW);
					}
	}
return 0;
}
