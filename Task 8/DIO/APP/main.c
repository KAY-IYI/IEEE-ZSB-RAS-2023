/*
 * main.c
 *
 *  Created on: Apr 29, 2023
 *      Author: Karam
 */
#include "../MCAL/DIO/DIO_interface.h"
#include "../MCAL/DIO/DIO_Confiq.h"

#include "../LIB/BIT_MATH.h"
#include "../lib/STD_TYPES.h"

#define ZERO        0b00111111
#define ONE         0b00000110
#define TWO         0b01011011
#define THREE       0b00001111
#define FOUR        0b01100110
#define FIVE        0b01101101
#define SIX         0b01111101
#define SEVEN       0b00000111
#define EIGHT       0b01111111
#define NINE        0b01101111

int main(){
	unsigned char NUM[10]={ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
	DIO_VoidInit();
	/*                  Pins Directions                 */

	DIO_u8SetPinDirection(DIO_u8_PORTA,DIO_u8_PIN0,DIO_u8_INPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTA,DIO_u8_PIN1,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTA,DIO_u8_PIN2,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTA,DIO_u8_PIN3,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTA,DIO_u8_PIN4,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTA,DIO_u8_PIN5,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTA,DIO_u8_PIN6,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTA,DIO_u8_PIN7,DIO_u8_OUTPUT);

	DIO_u8SetPinDirection(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_INPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTB,DIO_u8_PIN4,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTB,DIO_u8_PIN5,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTB,DIO_u8_PIN6,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTB,DIO_u8_PIN7,DIO_u8_OUTPUT);

	DIO_u8SetPinDirection(DIO_u8_PORTC,DIO_u8_PIN0,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTC,DIO_u8_PIN1,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTC,DIO_u8_PIN2,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTC,DIO_u8_PIN3,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTC,DIO_u8_PIN4,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTC,DIO_u8_PIN5,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTC,DIO_u8_PIN6,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTC,DIO_u8_PIN7,DIO_u8_OUTPUT);

	DIO_u8SetPinDirection(DIO_u8_PORTD,DIO_u8_PIN0,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_OUTPUT);
	DIO_u8SetPinDirection(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_OUTPUT);

	u8 switchRead1;
	u8 switchRead2;

	while(1){
		DIO_u8GetPinValue(DIO_u8_PORTA,DIO_u8_PIN0,&switchRead2);
		DIO_u8GetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,&switchRead1);

		if(switchRead1 == DIO_u8_HIGH && switchRead2 == DIO_u8_HIGH){

		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN1,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN2,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN3,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN4,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN5,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN6,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN7,DIO_u8_HIGH);

		DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN0,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN1,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN2,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN4,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN5,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN6,DIO_u8_HIGH);


		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN0,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN1,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN2,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN3,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN4,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN5,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN6,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTC,DIO_u8_PIN7,DIO_u8_HIGH);


		DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN0,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
		DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_HIGH);
		} else{
			DIO_u8SetPinValue(DIO_u8_PORTA,DIO_u8_PIN5,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTB,DIO_u8_PIN3,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN0,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN1,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN2,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN3,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN4,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN5,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_LOW);
			DIO_u8SetPinValue(DIO_u8_PORTD,DIO_u8_PIN7,DIO_u8_LOW);
		}

		//for (int i = 0; i < 10; i++)
			//{
				//DIO_u8SetPortValue(DIO_u8_PORTD,NUM[i]);
			//	_delay_ms(500);
			//}

	}
return 0;
}


