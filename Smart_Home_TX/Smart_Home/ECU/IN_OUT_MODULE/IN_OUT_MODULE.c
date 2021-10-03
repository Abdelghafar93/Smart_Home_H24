/*
 * IN_OUT_MODULE.c
 *
 * Created: 9/26/2021 8:13:57 PM
 *  Author: abdel
 */ 


#include "IN_OUT_MODULE.h"

void LED0_INT(void)
{
	//Define direction as output
	SET_BIT(LED0_DDR, LED0);
}
void LED0_ON(void)
{
	SET_BIT(LED0_PRT, LED0);
}
void LED0_OFF(void)
{
	CLR_BIT(LED0_PRT, LED0);
}
void LED0_Toggle(void)
{
	TGL_BIT(LED0_PRT, LED0);
}


void LED1_INT(void){
	
	SET_BIT(LED1_DDR, LED1);
}
void LED1_ON(void){
	
	SET_BIT(LED1_PRT, LED1);
}
void LED1_OFF(void){
	CLR_BIT(LED1_PRT, LED1);
}
void LED1_Toggle(void){
	TGL_BIT(LED1_PRT, LED1);
}


void BUZZER_INT(void){
	
	SET_BIT(BUZZER_DDR, BUZZER);
}
void BUZZER_ON(void){
	SET_BIT(BUZZER_PRT, BUZZER);
}
void BUZZER_OFF(void){
	CLR_BIT(BUZZER_PRT, BUZZER);
}
void BUZZER_Toggle(void){
	TGL_BIT(BUZZER_PRT, BUZZER);
}