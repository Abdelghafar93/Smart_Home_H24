/*
 * BIT_MATH.h
 *
 * Created: 9/26/2021 6:34:36 PM
 *  Author: abdel
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_


#define  SET_BIT(REG, BIT)    REG |= (1<<BIT)
#define  CLR_BIT(REG, BIT)    REG &=~(1<<BIT)
#define  TGL_BIT(REG, BIT)    REG ^= (1<<BIT)
#define  GET_BIT(REG, BIT)    ((REG>>BIT)&1)


#endif /* BIT_MATH_H_ */