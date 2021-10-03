/*
 * Room_2.c
 *
 * Created: 9/26/2021 9:02:02 PM
 *  Author: abdel
 */ 

#include "Room_2.h"


void Room2_INT(void){
	
	LED1_INT();
	BUZZER_INT();
	EXT_INTERRUPT1_Init();
	
}

void Room2_light_on(void){
	LED1_ON();
}

void Room2_light_off(void){
	LED1_OFF();
}


ISR(INT1_vect){
	BUZZER_ON();
	LCD_CLEAR();
	LCD_WRITE_STR("FIRE ALARM RM2");
	_delay_ms(200);
	LCD_CLEAR();
	BUZZER_OFF();
}