/*
 * SPI.h
 *
 * Created: 9/26/2021 7:23:11 PM
 *  Author: abdel
 */ 


#ifndef SPI_H_
#define SPI_H_

#include "CPU_CONFIG.h"


void SPI_initMasterMode(void);
void SPI_initSlaveMode(void);
void SPI_SendByte(char data);
char SPI_ReceiveByte(void);
void SPI_SendStr(char *data);





#endif /* SPI_H_ */