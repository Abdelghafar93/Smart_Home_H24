/*
 * LCD_CONFIG.h
 *
 * Created: 9/26/2021 9:15:31 PM
 *  Author: abdel
 */ 


#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_


#include "CPU_CONFIG.h"

#define LCD_MODE      4

#define LCD_CMD_PORT  DIO_PORTB

#define LCD_DTA_PORT  DIO_PORTA

#define LCD_RS        DIO_PIN1
#define LCD_RW        DIO_PIN2
#define LCD_EN        DIO_PIN3

#define LCD_D4        DIO_PIN4
#define LCD_D5        DIO_PIN5
#define LCD_D6        DIO_PIN6
#define LCD_D7        DIO_PIN7

#define LCD_OUTPUT    DIO_PIN_OUTPUT
#define LCD_LOW       DIO_PIN_LOW
#define LCD_HIGH      DIO_PIN_HIGH


#endif /* LCD_CONFIG_H_ */