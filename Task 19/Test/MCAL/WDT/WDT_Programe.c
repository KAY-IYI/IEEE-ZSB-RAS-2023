#include "../../lib/STD_TYPES.h"
#include "../../lib/BIT_MATH.h"
#include "../../LIB/Error_State.h"

#include "WDT_Private.h"

ES_t WDT_enu_Enable(u8 Copy_u8_Prescaler)
{
    ES_t Local_enu_ErrorState = STD_TYPES_OK;
    if (Copy_u8_Prescaler <= TIMES_2_1_S)
    {
        // Clear previous prescaler bits and set the new prescaler value
        WDT_U8_WDTCR_REG &= ~((1 << WDT_WDP0_Pin) | (1 << WDT_WDP1_Pin) | (1 << WDT_WDP2_Pin));
        WDT_U8_WDTCR_REG |= Copy_u8_Prescaler << WDT_WDP0_Pin;

        // Enable WDT
        BIT_SET(WDT_U8_WDTCR_REG, WDT_Enable_Pin);
    }
    else
    {
        Local_enu_ErrorState = STD_TYPES_NOK;
    }
    return Local_enu_ErrorState;
}
ES_t WDT_enu_Disable(void)
{
    WDT_U8_WDTCR_REG = 0x00;
    return STD_TYPES_OK;
}