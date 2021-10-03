/*
 * USART.h
 *
 * Created: 9/26/2021 7:33:14 PM
 *  Author: abdel
 */ 


#ifndef USART_H_
#define USART_H_

#include "CPU_CONFIG.h"

void USART_Init(void);
uint8_t USART_Rx(void);
void USART_Tx(uint8_t data);


#endif /* USART_H_ */