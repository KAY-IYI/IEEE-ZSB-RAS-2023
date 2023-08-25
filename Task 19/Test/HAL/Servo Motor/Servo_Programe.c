#include "../../LIB/Error_State.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "../../MCAL/DIO/DIO_Interface.h"
#include"../../MCAL/Timer/Timer_Interface.h"

#include"Servo_Config.h"
#include"Servo_Private.h"

 ES_t Servo_enu_SetServoAngle(u8 Copy_u8_ServoAngle) {
     ES_t Local_ErrorState = STD_TYPES_OK;

     // Check if the provided servo angle is within the valid range
     if (Copy_u8_ServoAngle <= SERVO_MAX_ANGLE) {
         // Calculate and set the value for Timer1 compare match register (OCR1A)
         u16  TIMER1_U16_OCR1A_Value = (1000 + (Copy_u8_ServoAngle * 1000UL) / SERVO_MAX_ANGLE) * 2;
        Timers_enu_TIMER1SetCTC(TIMER1_U16_OCR1A_Value);
     } else {
         // Servo angle is not within the valid range, set error state
         Local_ErrorState = STD_TYPES_NOK;
     }

     return Local_ErrorState;
 }

