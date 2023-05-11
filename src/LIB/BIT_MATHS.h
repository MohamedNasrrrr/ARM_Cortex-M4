#ifndef BIT_MATHS_H_
#define BIT_MATHS_H_


#define SET_BIT(reg,bit_n) (reg)|=(1<<bit_n)
#define CLR_BIT(reg,bit_n) (reg)&=~(1<<bit_n)
#define TGL_BIT(reg,bit_n) (reg)^=(1<<bit_n)
#define GET_BIT(VAR,BIT)    ((VAR>>BIT)&1)
#define WR_BIT(VAR,BIT,BIT_VALUE)  (VAR = (BIT_VALUE<<BIT) | (VAR &=~(1<<BIT)))





#endif
