/*
 * IN_OUT_MODULE_CONFIG.h
 *
 * Created: 9/26/2021 8:13:19 PM
 *  Author: abdel
 */ 


#ifndef IN_OUT_MODULE_CONFIG_H_
#define IN_OUT_MODULE_CONFIG_H_

#include "CPU_CONFIG.h"

#define LED0_DDR DDRC
#define LED0_PRT PORTC
#define LED0      PC2

#define LED1_DDR DDRC
#define LED1_PRT PORTC
#define LED1      PC7

#define LED2_DDR DDRD
#define LED2_PRT PORTD
#define LED2      PD3

#define RELAY_DDR DDRA
#define RELAY_PRT PORTA
#define RELAY     PA2

#define BUZZER_DDR DDRA
#define BUZZER_PRT PORTA
#define BUZZER    PA3

#define LED_OUTPUT 1
#define LED_HIGH   1
#define LED_LOW    0

#define RELAY_OUTPUT 1
#define RELAY_HIGH   1
#define RELAY_LOW    0

#define BUZZER_OUTPUT 1
#define BUZZER_HIGH   1
#define BUZZER_LOW    0




#endif /* IN_OUT_MODULE_CONFIG_H_ */