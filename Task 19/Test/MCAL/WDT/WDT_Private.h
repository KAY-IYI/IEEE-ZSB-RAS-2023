#ifndef WDT_PRIVATE_H
#define WDT_PRIVATE_H
#include "../../lib/STD_TYPES.h"


#define WDT_U8_WDTCR_REG           *((volatile u8*)0x41)


// Pin configuration
#define WDT_Enable_Pin    3
#define WDT_Disable_Pin   4
#define WDT_WDP0_Pin      5
#define WDT_WDP1_Pin      6
#define WDT_WDP2_Pin      7


#define TIMES_16_3_MS                  0
#define TIMES_32_5_MS                  1
#define TIMES_65_MS                    2
#define TIMES_0_13_S                   3
#define TIMES_0_26_S                   4
#define TIMES_0_52_S                   5
#define TIMES_1_0_S                    6
#define TIMES_2_1_S                    7  
#endif // WDT_CONFIG_H
