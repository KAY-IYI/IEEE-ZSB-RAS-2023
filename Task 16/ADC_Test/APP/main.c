//MCAL
#include	"../MCAL/DIO/DIO_interface.h"
#include	"../MCAL/ADC/ADC_Interface.h"
#include	"../MCAL/GI/GI_Interface.h"
//HAL
#include	"../HAL/LCD/LCD_Interface.h"
//LIB
#include	"../LIB/Error_State.h"

#include	<util/delay.h>
#define 	F_CPU 16000000UL


/*
 * clearUnusedDigits discribtion.
 *
 * This function is used to improve the visual presentation on the LCD display.
 * When displaying numbers with varying digits, such as voltage and resistance,
 * there might be leftover digits from the previous number that are still visible
 * on the LCD. This function clears any unused digits from the previous number
 * so that the new number is displayed neatly and clearly.
 *
 * I - value The number whose digits are to be displayed on the LCD.
 * II- Row The row number (0 or 1) where the number is to be displayed.
 */

void clearUnusedDigits(u16 Copy_u16_value, u8 Copy_u8_Row) {
    u8 Local_u8_numDigits = 1;
    u16 temp = Copy_u16_value;

    while (temp >= 10) {
        temp /= 10;
        Local_u8_numDigits++;
    }

    u8 start = 10 + (Local_u8_numDigits - 1);
    for (u8 i = start; i <= 15; i++) {
        LCD_enu_GoToXY(Copy_u8_Row, i);
        LCD_enu_WriteCharacter(' ');
    }
}

int main() {
    // Initialize the LCD and ADC
    LCD_enu_Init_8bit_Mode();
    ADC_enu_Init();

    // Display a welcome message
    LCD_enu_WriteString("   Hello  ");
    _delay_ms(1000);
    LCD_enu_Clear();
    _delay_ms(10);

    // Display headers for voltage and resistance
    LCD_enu_WriteString("Volt(mV):");
    LCD_enu_GoToXY(1, 0);
    LCD_enu_WriteString("LDR(Ohm):");

    while (1) {

        // Read the analog value
    	static u16 digitalValue = 0;
        ADC_enu_GetDigitalValueSynchNonBlocking(ADC_U8_CHANNEL0, &digitalValue);

        /* Calculate
         * 				I - voltage (in mV)
 	 	 *	 	 	 	II- resistance (in Ohm)
 	 	 *
        */
        u16 voltage = (digitalValue * 5000UL) / 1023;
        u32 resistance = ((10000 * 1023UL) / digitalValue) - 10000;

        // Clear the unused digits
        clearUnusedDigits(voltage, 0);
        clearUnusedDigits(resistance, 1);

        // Display the voltage and resistance on the LCD
        LCD_enu_GoToXY(0, 9);
        LCD_enu_WriteNumber(voltage);
        LCD_enu_GoToXY(1, 9);
        LCD_enu_WriteNumber(resistance);
    }

    return 0;
}
