/*
 * ADC.c
 *
 * Created: 9/26/2021 7:12:17 PM
 *  Author: abdel
 */ 

#include "ADC.h"

void ADC_INT(void)
{
    // refrence 
	CLR_BIT(ADMUX,REFS1);
	SET_BIT(ADMUX,REFS0);
	
	// prescaller to 128
	SET_BIT(ADCSRA,ADPS0);
	SET_BIT(ADCSRA,ADPS1);
	SET_BIT(ADCSRA,ADPS2);
	
	// enable ADC
	SET_BIT(ADCSRA,ADEN);
	
	// ENABLE INTERRUPT 
	SET_BIT(ADCSRA,ADIE);
	
	// ENABLE GLOBALE INTERRUPT
	SET_BIT(SREG,7);
	
			
}

uint16_t ADC_ReadChannel( uint8_t CHNMB)
{
	

	CLR_BIT(DDRA,CHNMB);
	
	
	ADMUX   |=(CHNMB << 0);
	
	SET_BIT(ADCSRA ,ADSC);
	
	while(!GET_BIT(ADCSRA,ADIF));
	
	
	uint16_t val_H , val_l , value;
	
	val_l = ADCL;
	val_H = ADCH * 256;
	
	value = val_l +val_H;
	
	return value;
	
}