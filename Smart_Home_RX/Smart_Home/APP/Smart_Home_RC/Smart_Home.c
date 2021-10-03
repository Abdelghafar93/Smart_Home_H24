/*
 * Smart_Home.c
 *
 * Created: 9/26/2021 8:54:06 PM
 *  Author: abdel
 */ 


#include "Smart_Home.h"


void Smart_Home_RC_INT(void){
	
	LCD_INT();
	
	LCD_WRITE_STR("    Welcome to   ");
	LCD_WRITE_L2();
	LCD_WRITE_STR("  Smart Home App  ");
	_delay_ms(100);
	LCD_CLEAR();
	
	
	SPI_initSlaveMode();
	GLOBAL_INTERRUPT_Init();
	GAS_SENSOR_INT();
	
	Room1_INT();
	Room2_INT();
	
	
}

void Smart_Home_RC_Start(void){
	uint8_t data;
	
	data = SPI_ReceiveByte();
	
	
	switch (data){
		
		case 'A' :
		Room1_light_on();
		LCD_CLEAR();
		LCD_WRITE_STR("RM 1 LIGHT ON");
		_delay_ms(100);
		LCD_CLEAR();
		data = 0;
		break;
		
		case 'B' :
		Room1_light_off();
		LCD_CLEAR();
		LCD_WRITE_STR("RM 1 LIGHT OFF");
		_delay_ms(100);
		LCD_CLEAR();
		data = 0;
		break;
		
		case 'C' :
		Room2_light_on();
		LCD_CLEAR();
		LCD_WRITE_STR("RM 2 LIGHT ON");
		_delay_ms(100);
		LCD_CLEAR();
		data = 0;
		break;
		
		case 'D' :
		Room2_light_off();
		LCD_CLEAR();
		LCD_WRITE_STR("RM 2 LIGHT OFF");
		_delay_ms(100);
		LCD_CLEAR();
		data = 0;
		break;
		default:
		LCD_WRITE_STR("WRONG ENTER ");
		_delay_ms(100);
		LCD_CLEAR();
		LCD_WRITE_STR("PLEASE ENTER : ");
		LCD_WRITE_L2();
		LCD_WRITE_STR(" (A / B / C / D) ");
		_delay_ms(200);
		LCD_CLEAR();
		break;
	}
}


ISR(ADC_vect){
	
	
	
	LCD_CLEAR();
	LCD_WRITE_STR("GAS LEAKAGE");
	BUZZER_ON();
	_delay_ms(200);
	BUZZER_OFF();
	LCD_CLEAR();
	
	
	
}