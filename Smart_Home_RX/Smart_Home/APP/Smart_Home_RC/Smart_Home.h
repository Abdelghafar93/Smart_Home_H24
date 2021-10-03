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
#include "LCD.h"
#include "SPI.h"
#include "EXT_INT.h"
#include "GAS_SENSOR.h"
#include "Room_1.h"
#include "Room_2.h"


void Smart_Home_RC_INT(void);
void Smart_Home_RC_Start(void);



#endif /* SMART_HOME_H_ */