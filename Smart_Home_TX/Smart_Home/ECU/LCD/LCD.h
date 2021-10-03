/*
 * LCD.h
 *
 * Created: 9/26/2021 9:15:40 PM
 *  Author: abdel
 */ 


#ifndef LCD_H_
#define LCD_H_

#include "LCD_CONFIG.h"

void LCD_INT(void);               
void LCD_WRITE_CMD(uint8_t cmd);  
void LCD_WRITE_DTA(uint8_t data);   
void LCD_WRITE_STR(uint8_t* str);  
void LCD_WRITE_NBR(uint32_t number);
void LCD_CLEAR(void);              





#endif /* LCD_H_ */