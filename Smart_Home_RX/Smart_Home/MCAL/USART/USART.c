/*
 * USART.c
 *
 * Created: 9/26/2021 7:33:02 PM
 *  Author: abdel
 */ 


#include "USART.h"
#include "LCD.h"

void USART_Init(void)
{
	   SET_BIT(SREG,7); // enable global interrupt
	
		// BODERATE ( 9600)
		UBRRH =0;
		UBRRL = 103;
	
		// UCSRA
		CLR_BIT(UCSRA,U2X);  //   single speed
		CLR_BIT(UCSRA,MPCM); // disable muti-processor
	
		// UCSRB
		UCSRB =0;
		SET_BIT(UCSRB,TXEN);  // enable Tx
		SET_BIT(UCSRB,RXEN);  // enable receiver
		SET_BIT(UCSRB,RXCIE);  // enable complete receiver interrupt
	
	
		// UCSRC 
		UCSRC = (1<< URSEL) | (1<< UCSZ0) | (1<< UCSZ1) ;
		
	
}

void USART_Tx( uint8_t data)
{
	
	while( GET_BIT(UCSRA,UDRE) ){}
	
		UDR = data;
}

uint8_t USART_Rx( void)
{
	uint8_t value = 0;
	while( GET_BIT(UCSRA,RXC) ) {}
	
	value =UDR;
	
	return value;
	
}
