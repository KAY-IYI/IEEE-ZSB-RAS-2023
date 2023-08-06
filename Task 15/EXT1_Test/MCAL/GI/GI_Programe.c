<<<<<<< HEAD
#include "../../lib/STD_TYPES.h"
#include "../../lib/BIT_MATH.h"
#include "../../LIB/Error_State.h"

#include "GI_Private.h"

ES_t GI_enu_Enable(void)
{
	u8 Local_u8_ErrorState = STD_TYPES_OK;
    /* Set the I-bit in the Status Register to enable global interrupts */
	BIT_SET(SREG_REG, GI_GLOBAL_INTERRUPT_ENABLE);
    return Local_u8_ErrorState;
}

ES_t GI_enu_Disable(void)
{
	u8 Local_u8_ErrorState = STD_TYPES_OK;
    /* Clear the I-bit in the Status Register to disable global interrupts */
	BIT_CLR(SREG_REG, GI_GLOBAL_INTERRUPT_ENABLE);
    return Local_u8_ErrorState;
}
=======
#include "../../lib/STD_TYPES.h"
#include "../../lib/BIT_MATH.h"
#include "../../LIB/Error_State.h"

#include "GI_Private.h"

ES_t GI_enu_Enable(void)
{
	u8 Local_u8_ErrorState = STD_TYPES_OK;
    /* Set the I-bit in the Status Register to enable global interrupts */
	BIT_SET(SREG_REG, GI_GLOBAL_INTERRUPT_ENABLE);
    return Local_u8_ErrorState;
}

ES_t GI_enu_Disable(void)
{
	u8 Local_u8_ErrorState = STD_TYPES_OK;
    /* Clear the I-bit in the Status Register to disable global interrupts */
	BIT_CLR(SREG_REG, GI_GLOBAL_INTERRUPT_ENABLE);
    return Local_u8_ErrorState;
}
>>>>>>> main
