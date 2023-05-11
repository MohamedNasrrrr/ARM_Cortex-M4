/*
 * GPIO_interface.h
 *
 *  Created on: May 11, 2023
 *      Author: Nourhan
 */

#ifndef MCAL_GPIO_GPIO_INTERFACE_H_
#define MCAL_GPIO_GPIO_INTERFACE_H_

#define GPIO_PORTA                 1
#define GPIO_PORTB                 2
#define GPIO_PORTC                 3

#define GPIO_PUSH_PULL             0
#define GPIO_OPEN_DRAIN            1

#define GPIO_LOW_SPEED  	       0
#define GPIO_MED_SPEED             1
#define GPIO_HIGH_SPEED            2
#define GPIO_VERY_HIGH_SPEED       3

#define GPIO_OUTPUT_LOW            0
#define GPIO_OUTPUT_HIGH           1


void GPIO_voidInitOutputPin(u8 Copy_u8PortID , u8 Copy_u8PinID , u8 Copy_u8PinType , u8 Copy_u8PinSpeed);


void GPIO_voidInitInputPin(u8 Copy_u8PortId , u8 Copy_u8PinMode ,
						   u8 Copy_u8PinType , u8 Copy_u8PinSpeed);

void GPIO_voidSetOutpinValue(u8 Copy_u8PortID , u8 Copy_u8PinID , u8 Copy_u8Value);

void GPIO_voidGetInputPinValue(u8 Copy_u8PortId , u8 Copy_u8PinId );




#endif /* MCAL_GPIO_GPIO_INTERFACE_H_ */
