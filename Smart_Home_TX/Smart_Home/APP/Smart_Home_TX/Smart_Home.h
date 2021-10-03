/*
 * Smart_Home.h
 *
 * Created: 9/26/2021 8:53:41 PM
 *  Author: abdel
 */ 


#ifndef SMART_HOME_H_
#define SMART_HOME_H_

#include "CPU_CONFIG.h"
#include "IN_OUT_MODULE.h"
#include <string.h>
#include "LCD.h"
#include "USART.h"
#include "SPI.h"



void Smart_Home_TX_INT(void);
void Smart_Home_TX_Start(void);



#endif /* SMART_HOME_H_ */