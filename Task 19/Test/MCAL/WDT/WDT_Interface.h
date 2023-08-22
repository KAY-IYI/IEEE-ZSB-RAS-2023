#ifndef WDT_INTERFACE_H
#define WDT_INTERFACE_H

#include "../../LIB/Error_State.h"
#include "../../lib/STD_TYPES.h" 

#define TIMES_16_3_MS                  0
#define TIMES_32_5_MS                  1
#define TIMES_65_MS                    2

#define TIMES_0_13_S                   3
#define TIMES_0_26_S                   4
#define TIMES_0_52_S                   5

#define TIMES_1_0_S                    6
#define TIMES_2_1_S                    7   

ES_t WDT_enu_Enable                    (u8 Copy_u8_Time);
ES_t WDT_enu_Disable                   (void);

#endif /*WDT_INTERFACE_H*/
