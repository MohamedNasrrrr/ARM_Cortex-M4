/*
 * GPIO_private.h
 *
 *  Created on: May 11, 2023
 *      Author: Nourhan
 */

#ifndef MCAL_GPIO_GPIO_PRIVATE_H_
#define MCAL_GPIO_GPIO_PRIVATE_H_


typedef struct
{
	u32 MODER   ;
	u32 OTYPER  ;
	u32 OSPEEDR ;
	u32 PUPDR   ;
	u32 IDR     ;
	u32 ODR     ;

}GPIO_REG_t;


#define GPIOA ((volatile GPIO_REG_t*)(0x40020000))
#define GPIOB ((volatile GPIO_REG_t*)(0X40020400))
#define GPIOC ((volatile GPIO_REG_t*)(0X40020800))

#endif /* MCAL_GPIO_GPIO_PRIVATE_H_ */
