#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

#define RCC_AHB1   1
#define RCC_AHB2   2
#define RCC_APB1   3
#define RCC_APB2   4

#define AHB1_GPIOH 7

void RCC_voidEnablePeripheral(u8 copy_u8BusID , u8 copy_u8PeripheralID);
void RCC_voidDisablePeripheral(u8 copy_u8BusID , u8 copy_u8PeripheralID);
void RCC_voidSetSystemClock(void);


#endif
