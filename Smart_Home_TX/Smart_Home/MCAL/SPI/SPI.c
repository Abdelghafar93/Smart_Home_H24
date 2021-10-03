/*
 * SPI.c
 *
 * Created: 9/26/2021 7:23:25 PM
 *  Author: abdel
 */ 


#include "SPI.h"

void SPI_initMasterMode(void)
{
	
	// set pins direction
	
	SET_BIT(DDRB,DDRB4);// SS
	SET_BIT(DDRB,DDRB5);// MOSI
	CLR_BIT(DDRB,DDRB6);// MISO
	SET_BIT(DDRB,DDRB7);// SCK
	

	//  set interrupt mode , prescale , clock phase , clock polarity and data order

	// enable SPI
	/// set as master
	SPCR = (1<<SPE) | (1<<MSTR);
	
}
void SPI_initSlaveMode(void)
{

	//  set pins direction
	
	CLR_BIT(DDRB,DDRB4);// SS
	CLR_BIT(DDRB,DDRB5);// MOSI
	SET_BIT(DDRB,DDRB6);// MISO
	CLR_BIT(DDRB,DDRB7);// SCK
	

	SPCR = 0; // interrupt , Prescale  
	
	SET_BIT(SPCR,SPE);// SPI Enable
	// Enable SPI interrupt
	//SET_BIT(SPCR,SPIE);
	SET_BIT(SREG,7);// enable global interrupt

	
}
void SPI_SendByte(char data)
{
	SPDR = data;
	while( ! (SPSR & (1 << SPIF) ) );
}

char SPI_ReceiveByte(void)
{
	while( ! (SPSR & (1 << SPIF) ) );
	return SPDR;
}

void SPI_SendStr(char *data)
{
	int i =0;
	while( data[i] != '\0')
	{
		
		SPI_SendByte(data[i]);
		// Note That :  this delay just for testing in protous
		_delay_ms(5);
		i++;
	}
	
}