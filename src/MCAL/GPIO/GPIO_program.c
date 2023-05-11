/*
 * GPIO_program.c
 *
 *  Created on: May 11, 2023
 *      Author: Nourhan
 */
#include "../../LIB/STD_LIB.h"
#include "../../LIB/BIT_MATHS.h"

#include "GPIO_config.h"
#include "GPIO_interface.h"
#include "GPIO_private.h"

void GPIO_voidInitOutputPin(u8 Copy_u8PortID , u8 Copy_u8PinID , u8 Copy_u8PinType , u8 Copy_u8PinSpeed)
{
	switch(Copy_u8PortID)
	{
	case GPIO_PORTA :
		/*Set Direction of the pin to be output
		 * Bit Masking */
		GPIOA -> MODER &=~ (0b11<<(Copy_u8PinID*2));
		GPIOA -> MODER |=  (0b01<<(Copy_u8PinID*2));

		/*Set Speed Of pin
		 * Bit Masking */
		GPIOA -> OSPEEDR &=~ (0b11<<(Copy_u8PinID*2));
		GPIOA -> OSPEEDR |=  (Copy_u8PinSpeed<<(Copy_u8PinID*2));


		WR_BIT(GPIOA -> OTYPER , Copy_u8PinID , Copy_u8PinType);
		break ;

	case GPIO_PORTB :
		/*Set Direction of the pin to be output
		 * Bit Masking */
		GPIOB -> MODER &=~ (0b11<<(Copy_u8PinID*2));
		GPIOB -> MODER |=  (0b01<<(Copy_u8PinID*2));

		/*Set Speed Of pin
		 * Bit Masking */
		GPIOB -> OSPEEDR &=~ (0b11<<(Copy_u8PinID*2));
		GPIOB -> OSPEEDR |=  (Copy_u8PinSpeed<<(Copy_u8PinID*2));


		WR_BIT(GPIOB -> OTYPER , Copy_u8PinID , Copy_u8PinType);
		break ;

	case GPIO_PORTC :
		/*Set Direction of the pin to be output
		 * Bit Masking */
		GPIOC -> MODER &=~ (0b11<<(Copy_u8PinID*2));
		GPIOC -> MODER |=  (0b01<<(Copy_u8PinID*2));

		/*Set Speed Of pin
		 * Bit Masking */
		GPIOC -> OSPEEDR &=~ (0b11<<(Copy_u8PinID*2));
		GPIOC -> OSPEEDR |=  (Copy_u8PinSpeed<<(Copy_u8PinID*2));


		WR_BIT(GPIOC -> OTYPER , Copy_u8PinID , Copy_u8PinType);
		break ;
	}
}

void GPIO_voidInitInputPin(u8 Copy_u8PortId , u8 Copy_u8PinMode ,
		u8 Copy_u8PinType , u8 Copy_u8PinSpeed)
{

}

void GPIO_voidSetOutpinValue(u8 Copy_u8PortID , u8 Copy_u8PinID , u8 Copy_u8Value)
{
	switch (Copy_u8PortID)
	{
		case GPIO_PORTA:
			WR_BIT(GPIOA -> ODR , Copy_u8PinID , Copy_u8Value);
			break;
		case GPIO_PORTB:
			WR_BIT(GPIOB -> ODR , Copy_u8PinID , Copy_u8Value);
			break;
		case GPIO_PORTC:
			WR_BIT(GPIOC -> ODR , Copy_u8PinID , Copy_u8Value);
			break;
	}
}
void GPIO_voidGetInputPinValue(u8 Copy_u8PortId , u8 Copy_u8PinId )
{

}
