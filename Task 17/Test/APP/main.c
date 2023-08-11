#include"../MCAL/DIO/DIO_interface.h"
#include"../MCAL/Timer/Timer_Interface.h"
#include"../MCAL/GI/GI_Interface.h"

#include"../HAL/LCD/LCD_Interface.h"

void toggleLed(void);

int main(){
	DIO_enu_Init();
	LCD_enu_Init_8bit_Mode();
	GI_enu_Enable();
	
	DIO_enu_SetPinDirection(DIO_u8_PORTA, DIO_u8_PIN2, DIO_u8_OUTPUT);
	DIO_enu_SetPinValue(DIO_u8_PORTB, DIO_u8_PIN0, DIO_u8_HIGH);
	
	Timer_enu_SetCallBack(&toggleLed,TIMER_CTC_MODE);
	Timer_enu_Timer0Init();
	
	LCD_enu_WriteString("Count: ");
	//SUPER LOOP
	while(1);
	
	return 0;
}
void toggleLed(void){
	static u8 counter = 0,ledState = 0;
	LCD_enu_GoToXY(0,7);
	LCD_enu_WriteNumber(++counter);
	if(ledState == 0){
		DIO_enu_SetPinValue(DIO_u8_PORTA, DIO_u8_PIN2, DIO_u8_HIGH);
		ledState = 1;
	}else{
		DIO_enu_SetPinValue(DIO_u8_PORTA, DIO_u8_PIN2, DIO_u8_LOW);
		ledState = 0;
	}
}
