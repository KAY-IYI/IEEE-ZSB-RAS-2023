#include  "../MCAL/DIO/DIO_Interface.h"
#include  "../HAL/LCD/LCD_Interface.h"
#include   "../HAL/KPD/Key_Interface.h"
#include <util/delay.h>

#define PASSWORD_LENGTH       4
#define CORRECT_PASSWORD      "1234"
#define MAX_TRYS              3

int main()
{
	DIO_enu_Init();
	// Initialize keypad and LCD
	KeyPad_enu_Init();
	LCD_enu_Init_8bit_Mode();

	LCD_enu_WriteString("Enter Password:");
	LCD_enu_GoToXY(1,0);

    char Local_Achar_enteredPassword[PASSWORD_LENGTH + 1] = {0};
    u8 Local_u8_passwordIndex = 0;
    u8 Local_u8_numoftry=0;
    while (1)
    {
        u8 Local_u8_key;
        KPD_enu_GetKey(&Local_u8_key);

        // If a key is pressed
        if (Local_u8_key != KPD_U8_UNPRESED)
        {
            // Check if it is a valid number key (0-9)
            if (Local_u8_key >= '0' && Local_u8_key <= '9')
            {
            	Local_Achar_enteredPassword[Local_u8_passwordIndex] = Local_u8_key;
                LCD_enu_WriteCharacter('*');
                Local_u8_passwordIndex++;
                if (Local_u8_passwordIndex == PASSWORD_LENGTH)
                {
                    if (strcmp(Local_Achar_enteredPassword, CORRECT_PASSWORD) == 0)
                    {
                    	LCD_enu_Clear();
                    	LCD_enu_WriteString("Correct Password");
                        DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_HIGH);
                    	LCD_enu_Clear();
                    	LCD_enu_WriteString("WELCOME");
                        _delay_ms(1000);
                        DIO_enu_SetPinValue(DIO_u8_PORTD,DIO_u8_PIN6,DIO_u8_LOW);
                        Local_u8_numoftry=0;
                        Local_u8_passwordIndex = 0;
                        memset(Local_Achar_enteredPassword, 0, PASSWORD_LENGTH + 1);
                    }
                    else
                    {
                    	LCD_enu_Clear();
                    	LCD_enu_WriteString(" Incorrect ");
                    	LCD_enu_GoToXY(1,0);
                    	LCD_enu_WriteString(" Password!!");
                    	Local_u8_numoftry++;
                    	Local_u8_passwordIndex = 0;
                        memset(Local_Achar_enteredPassword, 0, PASSWORD_LENGTH + 1);
                    }
                	if(Local_u8_numoftry >= MAX_TRYS)
                	{
                    	LCD_enu_Clear();
                		LCD_enu_WriteString("CLosed");
                		break;
                	}
                    _delay_ms(1000);
                    LCD_enu_Clear();
                    LCD_enu_WriteString("Enter Password:");
                	LCD_enu_GoToXY(1,0);
                }
            }
        }
    }

    return 0;
}














































//
//int main()
//{
//    DIO_enu_Init();
//    // Initialize keypad and LCD
//    KeyPad_voidInit();
//    LCD_enu_Init_8bit_Mode();
//    // Display a welcome message on the LCD
//    LCD_enu_WriteString("Key pressed:");
//    _delay_ms(100);
//    LCD_enu_Clear();
//    int iterator=0;
//    while (1)
//    {
//    	u8 Local_u8_Key;
//        // Get the key pressed
//    	KPD_GetKey(&Local_u8_Key);
//
//        // If a key is pressed
//        if (Local_u8_Key != KPD_U8_UNPRESED)
//        {
//            LCD_enu_WriteCharacter(Local_u8_Key);
//            _delay_ms(50);
//            iterator++;
//        }
//        if(iterator == (NUM_OF_CHAR+1))
//			LCD_enu_GoToXY(1,0);
//			/*check for clearing*/
//        else if(iterator == (2*NUM_OF_CHAR+1))
//        {
//			iterator=0;
//			LCD_enu_Clear();
//         }
//    }
//    return 0;
//}
