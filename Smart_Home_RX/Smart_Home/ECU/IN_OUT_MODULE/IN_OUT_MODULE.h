/*
 * IN_OUT_MODULE.h
 *
 * Created: 9/26/2021 8:13:38 PM
 *  Author: abdel
 */ 


#ifndef IN_OUT_MODULE_H_
#define IN_OUT_MODULE_H_

#include "IN_OUT_MODULE_CONFIG.h"


void LED0_INT(void);
void LED0_ON(void);
void LED0_OFF(void);
void LED0_Toggle(void);

void LED1_INT(void);
void LED1_ON(void);
void LED1_OFF(void);
void LED1_Toggle(void);

void LED2_INT(void);
void LED2_ON(void);
void LED2_OFF(void);
void LED2_Toggle(void);

void BUZZER_INT(void);
void BUZZER_ON(void);
void BUZZER_OFF(void);
void BUZZER_Toggle(void);

/*
void BUTTOM0_INT(void);
void BUTTOM0_START(void);

void BUTTOM1_INT(void);
void BUTTOM1_START(void);
*/

void RELAY_INT(void);
void RELAY_ON(void);
void RELAY_OFF(void);
void RELAY_Toggle(void);



#endif /* IN_OUT_MODULE_H_ */