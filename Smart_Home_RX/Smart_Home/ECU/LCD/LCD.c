/*
 * LCD.c
 *
 * Created: 9/26/2021 9:15:51 PM
 *  Author: abdel
 */ 


#include "LCD.h"

void LCD_INT(void)
{
	
	DIO_SetPin_Direction(LCD_CMD_PORT, LCD_RS, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_CMD_PORT, LCD_RW, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_CMD_PORT, LCD_EN, LCD_OUTPUT);
	
	DIO_SetPin_Direction(LCD_DTA_PORT, LCD_D4, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_DTA_PORT, LCD_D5, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_DTA_PORT, LCD_D6, LCD_OUTPUT);
	DIO_SetPin_Direction(LCD_DTA_PORT, LCD_D7, LCD_OUTPUT);
	
	_delay_ms(100);
	LCD_WRITE_CMD(0x02);
	LCD_WRITE_CMD(0x33);
	LCD_WRITE_CMD(0x32);
	LCD_WRITE_CMD(0x28);
	LCD_WRITE_CMD(0x0C);
	LCD_WRITE_CMD(0x01);
	LCD_WRITE_CMD(0x06);
	
}
void LCD_WRITE_CMD(uint8_t cmd)/*Write command inside control register*/
{
	
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_RS, LCD_LOW);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_RW, LCD_LOW);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	PORTA = (cmd & 0xF0) | (PORTA & 0x0F);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	PORTA = (cmd << 4) | (PORTA & 0x0F);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	_delay_ms(2);
	
}
void LCD_WRITE_L2(void){
	LCD_WRITE_CMD(0xC0);
}
void LCD_WRITE_DTA(uint8_t data)
{
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_RS, LCD_HIGH);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_RW, LCD_LOW);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	PORTA = (data & 0xF0) | (PORTA & 0x0F);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	PORTA = (data << 4) | (PORTA & 0x0F);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPin_Value(LCD_CMD_PORT, LCD_EN, LCD_LOW);
	_delay_ms(2);
	
}

void LCD_WRITE_STR(uint8_t* str)
{
	while(*str != '\0')
	{
		LCD_WRITE_DTA(*str);
		str++;
	}
}

void LCD_WRITE_NBR(uint32_t number)
{
	uint8_t num[10];
	ltoa(number, (uint8_t*)num, 10);   //Long number to Ascii
	LCD_WRITE_STR(num);
}
void LCD_CLEAR(void)
{
	LCD_WRITE_CMD(0x01);
}