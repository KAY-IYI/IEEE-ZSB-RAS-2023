/*********************************************************************************/
/***************** Name    :   Karam Yaseen  *************************************/
/***************** Date    :   15-08-2023    *************************************/
/***************** SWC     :   Timer         *************************************/
/***************** E_Mail   :  karamyaseen725@gmail.com    *************************/
/***************** Version :   1.0           *************************************/
/*********************************************************************************/

#ifndef TIMER_CONFIG_H
#define TIMER_CONFIG_H

/*
    -----------------------------Your Options-------------------------------------
        *****************
        * Timer0 Config *
        *****************
*/
/*
I-      Options For Mode:
                    1- TIMER_NORMAL_MODE
                    2- TIMER_CTC_MODE
                    3- TIMER_PWM_MODE
                    4- TIMER_FAST_PWM_MODE
*/
/*
II-     Options For Required Prescaler:
                    1- TIMER_NO_CLOCK_SOURCE
                    2- TIMER_NO_PRESCALER_FACTOR
                    3- TIMER_DIVISION_FACTOR_8
                    4- TIMER_DIVISION_FACTOR_64
                    5- TIMER_DIVISION_FACTOR_256
                    6- TIMER_DIVISION_FACTOR_1024
                    7- TIMER_T0_EXTERNAL_CLOCK_SOURCE_FALLING
                    8- TIMER_T0_EXTERNAL_CLOCK_SOURCE_RISING
*/
/*
    Options For Set Timer0 Overflow Interrupt
                     1- TIMER_DISABLE
                     2- TIMER_ENABLE
*/
/*  Set Timer0 CTC Interrupt
                     1- TIMER_DISABLE
                     2- TIMER_ENABLE
*/
/* Set PWM Mode
 * Choose between
 * 1. TIMER_OC_DISCONNECTED
 * 2. TIMER_FAST_PWM_INVERTING                            //  CLR_ON_CTC_SET_ON_TOP
 * 3. TIMER_FAST_PWM_NON_INVERTING                        //  SET_ON_CTC_CLR_ON_TOP
 */

/***    Choose Timer Mode           *************/
#define TIMER0_GENERATION_MODE TIMER_PWM_MODE

/***    Choose Prescaler         *************/
#define TIMER0_PRESCALER       TIMER_DIVISION_FACTOR_8

//#if TIMER0_GENERATION_MODE == TIMER_NORMAL_MODE

/*Set the Required Preload on TIMER0 Normal Mode*/
#define TIMER0_PRELOAD_VALUE 192

#define TIMER0_OVERFLOW_INTERRUPT TIMER_DISABLE

//#elif TIMER0_GENERATION_MODE == TIMER_CTC_MODE

/*Set the Required Compare Match Value on TIMER0 CTC Mode*/
#define TIMER0_CTC_VAL 0
#define TIMER0_CTC_INTERRUPT TIMER_DISABLE

//#elif TIMER0_GENERATION_MODE == TIMER_PWM_MODE

/*Set the Required Compare Match Value on TIMER0 CTC Mode*/
#define TIMER0_CTC_VAL 0
/* Set PWM Mode*/
#define TIMER0_CTC_PWM_MODE TIMER_FAST_PWM_INVERTING

//#elif TIMER0_WAVEFORM_GENERATION_MODE == TIMER_FAST_PWM_MODE

/*Set the Required Compare Match Value on TIMER0 CTC Mode*/
#define TIMER0_CTC_VAL      0

/* Set PWM Mode*/
#define TIMER0_CTC_PWM_MODE TIMER_FAST_PWM_INVERTING

//#endif

/***********************************************************************************************/
/***********************************************************************************************/
/***********************************************************************************************/

/*
    -----------------------------Your Options-------------------------------------
        *****************
        * Timer1 Config *
        *****************
*/

/*
Set Timer1  Generation Mode
 * Choose between
 * 1. TIMER_NORMAL_MODE
 * 2. TIMER_CTC_MODE
 * 3. TIMER_PWM_MODE
 * 4. TIMER_FAST_PWM_MODE
 */
#define TIMER1_GENERATION_MODE TIMER_FAST_PWM_MODE

/*
Set the Required Prescaler
 * Choose between
 * - TIMER_NO_CLOCK_SOURCE
 * - TIMER_NO_PRESCALER_FACTOR
 * - TIMER_DIVISION_FACTOR_8
 * - TIMER_DIVISION_FACTOR_64
 * - TIMER_DIVISION_FACTOR_256
 * - TIMER_DIVISION_FACTOR_1024
 * - TIMER_T0_EXTERNAL_CLOCK_SOURCE_FALLING
 * - TIMER_T0_EXTERNAL_CLOCK_SOURCE_RISING
 */
#define TIMER1_PRESCALER TIMER_DIVISION_FACTOR_8

/*Set Preload Value for Normal Mode*/
#define TIMER1_PRELOAD_VAL 0

/*Set CTCA Value*/
#define TIMER1_CTCA_VAL 500

/*Set CTCB Value*/
#define TIMER1_CTCB_VAL 0

/*
Set Compare Match Output for OCR1A
 * Choose between
 * 	PWM & FAST PWM mode
 *
 * 1. TIMER_OC_DISCONNECTED
 * 2. TIMER_FAST_PWM_INVERTING                            //  CLR_ON_CTC_SET_ON_TOP
 * 3. TIMER_FAST_PWM_NON_INVERTING                        //  SET_ON_CTC_CLR_ON_TOP
 */
#define TIMER1_OCR1A_MODE TIMER_FAST_PWM_INVERTING

/*Set Compare Match Output for OCR1A */
#define TIMER1_OCR1B_MODE TIMER_FAST_PWM_INVERTING

/*Set Timer1 Overflow Interrupt
 * Choose between
 * 1. TIMER_DISABLE
 * 2. TIMER_ENABLE
 */
#define TIMER1_OVERFLOW_INTERRUPT TIMER_DISABLE

/*Set Timer1 CTCB Interrupt
 * Choose between
 * 1. TIMER_DISABLE
 * 2. TIMER_ENABLE
 */
#define TIMER1_CTCB_INTERRUPT TIMER_DISABLE

/*Set Timer1 CTCA Interrupt
 * Choose between
 * 1. TIMER_DISABLE
 * 2. TIMER_ENABLE
 */
#define TIMER1_CTCA_INTERRUPT TIMER_DISABLE

/*Servo */
#define MAX_PULSE_WIDTH 2000
#define MIN_PULSE_WIDTH 1000

#endif
