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
	// pre-scaller to 128
	SET_BIT(ADCSRA,ADPS0);
	SET_BIT(ADCSRA,ADPS1);
	SET_BIT(ADCSRA,ADPS2);
	// enable ADC
	SET_BIT(ADCSRA,ADEN);
	
	// enable ADC INTERRUPT
	SET_BIT(ADCSRA,ADIE);
	// enable auto trigger
	CLR_BIT(ADCSRA,ADATE);
	
	// ENABLE GLOBALE INTERRUPT
	SET_BIT(SREG, 7);
  	

			
}

void ADC_SELECT_CHANNEL(uint8_t CHANNEL){
	
	//CHANNEL &= 0x07  ;

	CLR_BIT(DDRA,CHANNEL);
	
	ADMUX |= CHANNEL ;
	
		
		
	SET_BIT(ADCSRA ,ADSC);
	
	
}

uint16_t ADC_ReadChannel( uint8_t CHNMB)
{
	CHNMB &= 0x07  ;
	CLR_BIT(DDRA,CHNMB);
	ADMUX   |=CHNMB ;
	
	SET_BIT(ADCSRA ,ADSC);
	
	while(!GET_BIT(ADCSRA,ADIF));
	
	
	uint16_t val_H , val_l , value;
	
	val_l = ADCL;
	val_H = ADCH * 256;
	
	value = val_l +val_H;
	
	return value;
	
}