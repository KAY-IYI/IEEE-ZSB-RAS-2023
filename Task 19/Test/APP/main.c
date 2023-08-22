/*************MCAL*********/
#include"../MCAL/DIO/DIO_interface.h"
#include"../MCAL/Timer/Timer_Interface.h"
#include"../MCAL/ADC/ADC_Interface.h"

#define MAX_ANGLE   		180UL

int main(){
	DIO_enu_SetPinDirection(DIO_u8_PORTB, DIO_u8_PIN3, DIO_u8_OUTPUT);
	DIO_enu_SetPinDirection(DIO_u8_PORTD, DIO_u8_PIN5, DIO_u8_OUTPUT);

	Timers_enu_Timer0Init();
	Timers_enu_Timer1Init();
	ADC_enu_Init();

	while(1){
		u16 digitalValue_0 = 0,digitalValue_1=0;
		u8 ledBrightness =0,servoAngle =0;

		ADC_enu_GetDigitalValueSynchNonBlocking(ADC_U8_CHANNEL1, &digitalValue_0);
		ADC_enu_GetDigitalValueSynchNonBlocking(ADC_U8_CHANNEL0, &digitalValue_1);

		ledBrightness = ( digitalValue_0 * 255UL    ) / 1023;
		servoAngle    = ( digitalValue_1 * MAX_ANGLE) / 1023;
		Timers_enu_TIMER0SetCTC(ledBrightness);
		Timers_enu_SetServoAngle(servoAngle);
	}
	return 0;
}
