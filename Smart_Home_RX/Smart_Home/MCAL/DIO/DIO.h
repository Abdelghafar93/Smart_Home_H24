/*
 * DIO.h
 *
 * Created: 9/26/2021 6:43:46 PM
 *  Author: abdel
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "DIO_CONFIG.h"


void DIO_SetPin_Direction(uint8_t port, uint8_t pin, uint8_t direction);
void DIO_SetPin_Value(uint8_t port, uint8_t pin, uint8_t value);
void DIO_TglPin_Value(uint8_t port, uint8_t pin);
uint8_t DIO_GetPin_Value(uint8_t port, uint8_t pin);
void DIO_SetPULLUp(uint8_t port, uint8_t pin);



#endif /* DIO_H_ */