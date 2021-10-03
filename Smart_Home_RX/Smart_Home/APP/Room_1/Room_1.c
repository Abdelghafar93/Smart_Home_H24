/*
 * Room_1.c
 *
 * Created: 9/26/2021 9:01:24 PM
 *  Author: abdel
 */ 

#include "Room_1.h"


void Room1_INT(){
	
	LED0_INT();
	BUZZER_INT();
	EXT_INTERRUPT0_Init();
	
}

void Room1_light_on(){
	LED0_ON();
}

void Room1_light_off(){
	LED0_OFF();
}


ISR(INT0_vect){
	BUZZER_ON();
	LCD_CLEAR();
	LCD_WRITE_STR("FIRE ALARM RM1");
	_delay_ms(200);
	LCD_CLEAR();
	BUZZER_OFF();
}

