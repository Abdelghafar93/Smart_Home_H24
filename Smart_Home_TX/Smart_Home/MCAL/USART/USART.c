/*
 * USART.c
 *
 * Created: 9/26/2021 7:33:02 PM
 *  Author: abdel
 */ 


#include "USART.h"
#include "LCD.h"


#define  BAUD_PRESCALE  (((F_CPU / (USART_BAUDRATE * 16UL))) - 1)

void UART_init(long USART_BAUDRATE)
{
	SET_BIT(SREG,7); // TURN ON GLOBALE INTERRUPT 
	UCSRB |= (1 << RXEN) | (1 << TXEN);	//  Turn on transmission and reception 
	UCSRC |= (1 << URSEL) | (1 << UCSZ0) | (1 << UCSZ1); // Use 8-bit char size 
	SET_BIT(UCSRA,U2X);
	UBRRL = BAUD_PRESCALE;			//   Load lower 8-bits of the baud rate 
	UBRRH = (BAUD_PRESCALE >> 8);		//   Load upper 8-bits
	SET_BIT(UCSRB,RXCIE); // TURN ON USART INTERRUPT
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
