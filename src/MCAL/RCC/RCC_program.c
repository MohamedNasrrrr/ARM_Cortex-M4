/*
 * RCC_program.c
 *
 *  Created on: May 4, 2023
 *      Author: Nourhan
 */

#include "../../LIB/STD_LIB.h"
#include "../../LIB/BIT_MATHS.h"

#include "RCC_inteface.h"
#include "RCC_config.h"
#include "RCC_private.h"

void RCC_voidSetSystemClock(void)
{
#if SYSTEM_CLK_SRC == HSI

	SET_BIT(RCC_CR,0);
	CLR_BIT(RCC_CFGR,0);
	CLR_BIT(RCC_CFGR,1);

#elif SYSTEM_CLK_SRC == HSE_RC
	SET_BIT(RCC_CR,16);
	SET_BIT(RCC_CR,18);
	SET_BIT(RCC_CFGR,0);
	CLR_BIT(RCC_CFGR,1);

#elif SYSTEM_CLK_SRC == HSE_CRYSTAL
	SET_BIT(RCC_CR,16);
	SET_BIT(RCC_CR,18);
	SET_BIT(RCC_CFGR,0);
	SET_BIT(RCC_CFGR,1);

#elif SYSTEM_CLK_SRC == PLL

#else
#error ("wrong system clock configurtion ")

#endif


}
void RCC_voidEnablePeripheral(u8 copy_u8BusID , u8 copy_u8PeripheralID)
{
	switch(copy_u8BusID)
	{
	case RCC_AHB1:
		SET_BIT(RCC_AHB1ENR,copy_u8PeripheralID );
		break;

	case RCC_AHB2:
		SET_BIT(RCC_AHB2ENR,copy_u8PeripheralID );
			break;

	case RCC_APB1:
		SET_BIT(RCC_APB1ENR,copy_u8PeripheralID );
			break;

	case RCC_APB2:
		SET_BIT(RCC_APB2ENR,copy_u8PeripheralID );
			break;


	}
}
