#ifndef SERVO_INTERFACE_H
#define SERVO_INTERFACE_H

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/Error_State.h"

#define Servo_u8_PORT           DIO_u8_PORTA
#define Servo_u8_pin            DIO_u8_PIN5

 ES_t Servo_enu_SetServoAngle(u8 Copy_u8_ServoAngle);

#endif
