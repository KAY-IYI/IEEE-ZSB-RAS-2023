#include "../MCAL/DIO/DIO_Interface.h"

#include "../HAL/LCD/LCD_Private.h"
#include "../HAL/LCD/LCD_Confiq.h"
#include "main.h"
#define F_CPU 8000000UL
#include <util/delay.h>

int main(void){
DIO_enu_Init();
LCD_enu_Init();

LCD_enu_CreateCustomChar(LCD_u8_CHAR0,Heart_Char);
LCD_enu_CreateCustomChar(LCD_u8_CHAR1,Alien_Char);
LCD_enu_CreateCustomChar(LCD_u8_CHAR2,Sound_Char);
LCD_enu_CreateCustomChar(LCD_u8_CHAR3,Lock_Char);
LCD_enu_CreateCustomChar(LCD_u8_CHAR4,Skull_Char);

int iterator = 0;
int iterator1 = 0;

u8 switch1_read,switch2_read,switch3_read,switch4_read,switch5_read;

LCD_enu_SendString(" Lets Play ");

_delay_ms(100);

LCD_enu_Clear();

while(1){
	DIO_enu_GetPinValue(DIO_u8_PORTA, DIO_u8_PIN3, &switch1_read);
	DIO_enu_GetPinValue(DIO_u8_PORTA, DIO_u8_PIN4, &switch2_read);
	DIO_enu_GetPinValue(DIO_u8_PORTA, DIO_u8_PIN5, &switch3_read);
	DIO_enu_GetPinValue(DIO_u8_PORTA, DIO_u8_PIN6, &switch4_read);
	DIO_enu_GetPinValue(DIO_u8_PORTA, DIO_u8_PIN7, &switch5_read);
	_delay_ms(25);
	if(switch1_read==1){
		iterator++;
		LCD_enu_WriteCharacter(Heart_Char);
		_delay_ms(25);
	}else if(switch2_read==1){
		iterator++;
		LCD_enu_WriteCharacter(Alien_Char);
		_delay_ms(25);
	}else if(switch3_read==1){
		iterator++;
		LCD_enu_WriteCharacter(Sound_Char);
		_delay_ms(25);
	}
	else if(switch4_read==1){
		iterator++;
		LCD_enu_WriteCharacter(Lock_Char);
		_delay_ms(25);
		}
	else if(switch5_read==1){
//	LCD_enu_WriteCharacter(extraChar[iterator1]);
//	iterator1++;
		iterator++;
		LCD_enu_WriteCharacter(Skull_Char);
		_delay_ms(25);
		}
	/*check line1*/
	if(iterator > NUM_OF_CHAR)
		LCD_enu_SetCursor(1,0);
	/*check for clearing*/
	else if(iterator > (2*NUM_OF_CHAR))
		LCD_enu_Clear();
}
	return 0;
}

