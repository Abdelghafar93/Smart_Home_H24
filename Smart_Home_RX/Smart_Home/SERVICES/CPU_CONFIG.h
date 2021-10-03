/*
 * CPU_CONFIG.h
 *
 * Created: 9/26/2021 6:35:20 PM
 *  Author: abdel
 */ 


#ifndef CPU_CONFIG_H_
#define CPU_CONFIG_H_


#undef F_CPU                // Undefined internal oscillator
#define F_CPU 16000000      // Define external oscillator
#include <avr/io.h>         // Define Input/Output for micro AVR
#include <avr/interrupt.h>  // Define interrupts for micro AVR 
#include <util/delay.h>     // Defined built-in delay function
#include "BIT_MATH.h"
#include "DIO.h"



#endif /* CPU_CONFIG_H_ */