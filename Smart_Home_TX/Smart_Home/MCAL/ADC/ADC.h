/*
 * ADC.h
 *
 * Created: 9/26/2021 7:12:44 PM
 *  Author: abdel
 */ 


#ifndef ADC_H_
#define ADC_H_

#include "ADC_CONFIG.h"

void ADC_INT(void);
uint16_t ADC_ReadChannel( uint8_t CHNMB);



#endif /* ADC_H_ */