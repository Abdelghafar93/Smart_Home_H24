/*
 * Smart_Home.c
 *
 * Created: 9/26/2021 8:54:06 PM
 *  Author: abdel
 */ 


#include "Smart_Home.h"
#define   USART_BAUDRATE 9600


void Smart_Home_TX_INT(void){
	 
	UART_init( USART_BAUDRATE);
	SPI_initMasterMode();
	
}

void Smart_Home_TX_Start(void){
	
	

}


ISR(USART_RXC_vect)
{
	
	SPI_SendByte(UDR);
	_delay_ms(500);
	
}