/*********************************************************************************/
/***************** Name    :   Karam Yaseen  *************************************/
/***************** Date    :   11-08-2023    *************************************/
/***************** SWC     :   Timer         *************************************/
/***************** E_Mail   :  karamyaseen725@gmail.com    ***********************/
/***************** Version :   1.0           *************************************/
/*********************************************************************************/
#include "../../LIB/Error_State.h"
#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "../DIO/DIO_Interface.h"
#include "Timer_Private.h"
#include "Timer_Config.h"

#define F_CPU 8000000UL

/*Global Pointer to array of Function to Hold the Call Back Function Address for Timer*/
static void (*Timers_pf_CallBackFunc[2])(void) = {NULL};

ES_t Timers_enu_Timer0Init(void)
{

#if TIMER0_GENERATION_MODE == TIMER_NORMAL_MODE
    /*Initialize Waveform Generation Mode as Normal Mode*/
    BIT_CLR(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_WGM00);
    BIT_CLR(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_WGM01);

    /*Set the Required Preload Value*/
    TIMER0_U8_TCNT0_REG = TIMER0_PRELOAD_VALUE;
/*Timer0 Overflow Interrupt Enable*/
#if TIMER0_OVERFLOW_INTERRUPT == TIMER_DISABLE
    BIT_CLR(TIMER_U8_TIMSK_REG, TIMER_U8_TIMSK_TOIE0);
#elif (TIMER0_OVERFLOW_INTERRUPT == TIMER_ENABLE)
    BIT_SET(TIMER_U8_TIMSK_REG, TIMER_U8_TIMSK_TOIE0);
#endif

#elif TIMER0_GENERATION_MODE == TIMER_CTC_MODE
    /*Initialize Waveform Generation Mode as CTC Mode*/
    BIT_CLR(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_WGM00);
    BIT_SET(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_WGM01);

    /*Set the Required CTC Value*/
    TIMER0_U8_OCR0_REG = TIMER0_CTC_VAL;

    /*Timer0 Compare Match Interrupt Enable*/
#if TIMER0_CTC_INTERRUPT == TIMER_DISABLE
    BIT_CLR(TIMER_U8_TIMSK_REG, TIMER_U8_TIMSK_OCIE0);
#elif TIMER0_CTC_INTERRUPT == TIMER_ENABLE
    BIT_SET(TIMER_U8_TIMSK_REG, TIMER_U8_TIMSK_OCIE0);

#endif
#elif TIMER0_GENERATION_MODE == TIMER_FAST_PWM_MODE

    /*Initialize Waveform Generation Mode as Fast PWM Mode*/
    BIT_SET(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_WGM00);
    BIT_SET(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_WGM01);

    /*Set CTC Fast PWM MODE*/
#if TIMER0_CTC_PWM_MODE == TIMER_OC_DISCONNECTED
    BIT_CLR(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM00);
    BIT_CLR(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM01);
#elif TIMER0_CTC_PWM_MODE == TIMER_FAST_PWM_INVERTING
    BIT_CLR(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM00);
    BIT_SET(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM01);
#elif TIMER0_CTC_PWM_MODE == TIMER_FAST_PWM_NON_INVERTING
    BIT_SET(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM00);
    BIT_SET(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM01);

#endif
#elif TIMER0_GENERATION_MODE == TIMER_PWM_MODE
    /*Initialize Waveform Generation Mode as PWM Mode*/
    BIT_SET(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_WGM00);
    BIT_CLR(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_WGM01);

    /*Set CTC PWM MODE*/
#if TIMER0_CTC_PWM_MODE == TIMER_FAST_PWM_INVERTING
    BIT_CLR(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM00);
    BIT_SET(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM01);
#elif TIMER0_CTC_PWM_MODE == TIMER_OC_DISCONNECTED
    BIT_CLR(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM00);
    BIT_CLR(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM01);
#elif TIMER0_CTC_PWM_MODE == TIMER_FAST_PWM_NON_INVERTING
    BIT_SET(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM00);
    BIT_SET(TIMER0_U8_TCCR0_REG, TIMER0_U8_TCCR0_COM01);
#endif
#endif

    /*Set the Required Prescaler*/
    TIMER0_U8_TCCR0_REG &= TIMER_PRESCALER_MASK;
    TIMER0_U8_TCCR0_REG |= TIMER0_PRESCALER;
    return STD_TYPES_OK;
}

ES_t Timers_enu_Timer1Init(void)
{
    /*Set Configurable Modes*/

#if TIMER1_GENERATION_MODE == TIMER_NORMAL_MODE

    /*Set Waveform generation mode as Normal mode */
    BIT_CLR(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_WGM10);
    BIT_CLR(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_WGM11);
    BIT_CLR(TIMER1_U8_TCCR1B_REG, TIMER1_U8_TCCR1B_WGM12);
    BIT_CLR(TIMER1_U8_TCCR1B_REG, TIMER1_U8_TCCR1B_WGM13);

    /*Set the require Preload Value*/
    TIMER1_U8_TCNT1_REG = TIMER1_PRELOAD_VAL;

#elif TIMER1_GENERATION_MODE == TIMER1_CTC_MODE
    /*Set Waveform generation mode as CTC modes */
#if TIMER1_GENERATION_MODE == TIMER1_CTC_ICR1_MODE
    BIT_CLR(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_WGM10);
    BIT_CLR(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_WGM11);
    BIT_SET(TIMER1_U8_TCCR1B_REG, TIMER1_U8_TCCR1B_WGM12);
    BIT_SET(TIMER1_U8_TCCR1B_REG, TIMER1_U8_TCCR1B_WGM13);
#elif TIMER1_GENERATION_MODE == TIMER1_CTC_OCR1A_MODE
    BIT_CLR(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_WGM10);
    BIT_CLR(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_WGM11);
    BIT_SET(TIMER1_U8_TCCR1B_REG, TIMER1_U8_TCCR1B_WGM12);
    BIT_CLR(TIMER1_U8_TCCR1B_REG, TIMER1_U8_TCCR1B_WGM13);
#endif

    /*Set the require CTC Values*/
    TIMER1_U8_OCR1A_REG = TIMER1_CTCA_VAL;
    TIMER1_U8_OCR1B_REG = TIMER1_CTCB_VAL;

#elif TIMER1_GENERATION_MODE == TIMER_FAST_PWM_MODE
    // Select Timer1 Mode ==> Mode 14

    /*Set Waveform generation mode as PWM modes */
    BIT_CLR(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_WGM10);
    BIT_SET(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_WGM11);
    BIT_SET(TIMER1_U8_TCCR1B_REG, TIMER1_U8_TCCR1B_WGM12);
    BIT_SET(TIMER1_U8_TCCR1B_REG, TIMER1_U8_TCCR1B_WGM13);

    /*Set the require CTC Values*/
    TIMER1_U8_OCR1A_REG = TIMER1_CTCA_VAL;
    TIMER1_U8_OCR1B_REG = TIMER1_CTCB_VAL;

    /*Set OCR1A mode*/
#if TIMER1_OCR1A_MODE == TIMER_FAST_PWM_INVERTING
    BIT_CLR(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_COM1A0);
    BIT_SET(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_COM1A1);
#elif TIMER1_OCR1A_MODE == TIMER_OC_DISCONNECTED
    BIT_CLR(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_COM1A0);
    BIT_CLR(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_COM1A1);
#elif TIMER1_OCR1A_MODE == TIMER_FAST_PWM_NON_INVERTING
    BIT_SET(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_COM1A0);
    BIT_SET(TIMER1_U8_TCCR1A_REG, TIMER1_U8_TCCR1A_COM1A1);
#endif
    TIMER1_U8_ICR1_REG = 19999;
#endif
    /*Set the Required Prescaler*/
    TIMER1_U8_TCCR1B_REG &= TIMER_PRESCALER_MASK;
    TIMER1_U8_TCCR1B_REG |= TIMER1_PRESCALER;
    return STD_TYPES_OK;
}

ES_t Timers_enu_TIMER0SetPreload(u8 Copy_u8_Preload)
{
    TIMER0_U8_TCNT0_REG = Copy_u8_Preload;
    return STD_TYPES_OK;
}

ES_t Timers_enu_TIMER0SetCTC(u8 Copy_u8_CTC)
{
    TIMER0_U8_OCR0_REG = Copy_u8_CTC;
    return STD_TYPES_OK;
}
ES_t Timers_enu_TIMER1SetCTC(u8 Copy_u8_CTC){
    TIMER1_U8_OCR1A_REG = Copy_u8_CTC;
    return STD_TYPES_OK;
}
ES_t Timers_enu_TIMER0GetCounterValue(u8 *Copy_pu8_ReturnValue)
{
    ES_t Local_u8_ErrorState = STD_TYPES_OK;
    if (Copy_pu8_ReturnValue != NULL)
    {
        *Copy_pu8_ReturnValue = TIMER0_U8_TCNT0_REG;
        Local_u8_ErrorState = STD_TYPES_OK;
    }
    else
    {
        Local_u8_ErrorState = STD_TYPES_NOK;
    }
    return Local_u8_ErrorState;
}
ES_t Timers_enu_SetCallBack(void (*Copy_pf_CallBackFunc)(void), u8 Copy_u8_Mode)
{
    ES_t Local_u8_ErrorState = STD_TYPES_OK;
    if (Copy_pf_CallBackFunc != NULL)
    {
        Timers_pf_CallBackFunc[Copy_u8_Mode] = Copy_pf_CallBackFunc;
    }
    else
    {
        Local_u8_ErrorState = STD_TYPES_NOK;
    }
    return Local_u8_ErrorState;
}
/* Set Servo Angle using Timer1 */
//ES_t Timers_enu_SetServoAngle(u8 Copy_u8_ServoAngle)
//{
//    // Calculate the pulse width corresponding to the desired angle
//    u16 Local_u16_pulseWidth = (u16)((Copy_u8_ServoAngle * (MAX_PULSE_WIDTH - MIN_PULSE_WIDTH) / 180) + MIN_PULSE_WIDTH);
//
//    // Set the compare match value for generating the desired pulse width
//    Timers_enu_TIMER0SetCTC(Local_u16_pulseWidth);
//
//    // Return success status
//    return STD_TYPES_OK;
//}

//  ES_t Timers_enu_SetServoAngle(u8 Copy_u8_ServoAngle) {
//      ES_t Local_ErrorState = STD_TYPES_OK;

//      // Check if the provided servo angle is within the valid range
//      if (Copy_u8_ServoAngle <= SERVO_MAX_ANGLE) {
//          // Calculate and set the value for Timer1 compare match register (OCR1A)
//          TIMER1_U8_OCR1A_REG = (1000 + (Copy_u8_ServoAngle * 1000UL) / SERVO_MAX_ANGLE) * 2;
//      } else {
//          // Servo angle is not within the valid range, set error state
//          Local_ErrorState = STD_TYPES_NOK;
//      }

//      return Local_ErrorState;
//  }
/*TIMER0 Normal Mode ISR*/
void __vector_11(void) __attribute__((signal));
void __vector_11(void)
{
#if (TIMER0_PRESCALER == TIMER_T0_EXTERNAL_CLOCK_SOURCE_FALLING) || (TIMER0_PRESCALER == TIMER_T0_EXTERNAL_CLOCK_SOURCE_RISING)
    if (Timers_pf_CallBackFunc[TIMER_CTC_MODE] != NULL)
        Timers_pf_CallBackFunc[TIMER_CTC_MODE]();
#else
    static u16 Local_u16_CounterOVF = 0;
    Local_u16_CounterOVF++;
    if (Local_u16_CounterOVF == 3906)
    {
        /*clear overflow counter*/
        Local_u16_CounterOVF = 0;

        /*update preload Value*/
        TIMER0_U8_TCNT0_REG = TIMER0_PRELOAD_VALUE;

        /*calling App function*/
        if (Timers_pf_CallBackFunc[TIMER_NORMAL_MODE] != NULL)
            Timers_pf_CallBackFunc[TIMER_NORMAL_MODE]();
    }
#endif
}

/*TIMER0 CTC Mode ISR*/
void __vector_10(void) __attribute__((signal));
void __vector_10(void)
{
#if (TIMER0_PRESCALER == TIMER_T0_EXTERNAL_CLOCK_SOURCE_FALLING) || (TIMER0_PRESCALER == TIMER_T0_EXTERNAL_CLOCK_SOURCE_RISING)
    if (Timers_pf_CallBackFunc[TIMER_CTC_MODE] != NULL)
        Timers_pf_CallBackFunc[TIMER_CTC_MODE]();
#else
    static u16 Local_u16_CounterCTC = 0;
    Local_u16_CounterCTC++;
    if (Local_u16_CounterCTC == 10500)
    {
        Local_u16_CounterCTC = 0;
        if (Timers_pf_CallBackFunc[TIMER_CTC_MODE] != NULL)
            Timers_pf_CallBackFunc[TIMER_CTC_MODE]();
    }
#endif
}
