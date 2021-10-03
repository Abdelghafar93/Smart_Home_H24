/*
 * GAS_SENSOR.c
 *
 * Created: 9/30/2021 9:54:23 PM
 *  Author: abdel
 */ 


#include "ADC.h"
#include "CPU_CONFIG.h"


void GAS_SENSOR_INT(void){
	
	ADC_INT();
	ADC_SELECT_CHANNEL(1);
}


