/*
 * DIO_CONFIG.h
 *
 * Created: 9/26/2021 6:43:31 PM
 *  Author: abdel
 */ 


#ifndef DIO_CONFIG_H_
#define DIO_CONFIG_H_

#include "CPU_CONFIG.h"



typedef enum
{
	DIO_PORTA = 0,
	DIO_PORTB = 1,
	DIO_PORTC = 2,
	DIO_PORTD = 3
}DIO_Port;

typedef enum
{
	DIO_PIN0 = 0,
	DIO_PIN1 = 1,
	DIO_PIN2 = 2,
	DIO_PIN3 = 3,
	DIO_PIN4 = 4,
	DIO_PIN5 = 5,
	DIO_PIN6 = 6,
	DIO_PIN7 = 7
	
}DIO_PIN;


// Pin Direction
#define DIO_PIN_INPUT  0
#define DIO_PIN_OUTPUT 1
// Pin State
#define DIO_PIN_LOW  0
#define DIO_PIN_HIGH 1
// Port Direction
#define DIO_PORT_INPUT  0x00
#define DIO_PORT_OUTPUT 0xFF
// Port State
#define DIO_PORT_LOW  0x00
#define DIO_PORT_HIGH 0xFF




#endif /* DIO_CONFIG_H_ */