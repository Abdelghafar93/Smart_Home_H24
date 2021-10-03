/*
 * EXT_INT.c
 *
 * Created: 9/26/2021 7:59:01 PM
 *  Author: abdel
 */ 


#include "EXT_INT.h"

void GLOBAL_INTERRUPT_Init(void)
{
	if(GLOBAL_INTERRUPT_STATE == GLOBAL_INTERRUPT_EN)
	SET_BIT(SREG, 7);
	else if (GLOBAL_INTERRUPT_STATE == GLOBAL_INTERRUPT_DS)
	CLR_BIT(SREG, 7);
	
}
void EXT_INTERRUPT0_Init(void)
{
	// Enable global interrupt
	GLOBAL_INTERRUPT_Init();
	//Enable External Interrupt 0
	SET_BIT(GICR, INT0);
	//SET_BIT(GICR, 6);
	// TRIGGER INTERRUPT
	if( EXT_INT0_TRIGGER == EXT_INT_TRG_LOW){
	CLR_BIT(MCUCR, ISC01);
	CLR_BIT(MCUCR, ISC00);
	}
	else if (EXT_INT0_TRIGGER == EXT_INT_TRG_ANY_LOGICAL){
	CLR_BIT(MCUCR, ISC01);
	SET_BIT(MCUCR, ISC00);
	}
	else if (EXT_INT0_TRIGGER == EXT_INT_TRG_FALLING_EDGE){
	SET_BIT(MCUCR, ISC01);
	CLR_BIT(MCUCR, ISC00);
	}
	else if (EXT_INT0_TRIGGER == EXT_INT_TRG_RISING_EDGE){
	SET_BIT(MCUCR, ISC01);
	SET_BIT(MCUCR, ISC00);
	}
	
}


void EXT_INTERRUPT1_Init(void)
{
	// Enable global interrupt
	GLOBAL_INTERRUPT_Init();
	//Enable External Interrupt 1
	SET_BIT(GICR, INT1);
	
	// TRIGGER INTERRUPT
	if( EXT_INT1_TRIGGER == EXT_INT_TRG_LOW){
		CLR_BIT(MCUCR, ISC11);
		CLR_BIT(MCUCR, ISC10);
	}
	else if (EXT_INT1_TRIGGER == EXT_INT_TRG_ANY_LOGICAL){
		CLR_BIT(MCUCR, ISC11);
		SET_BIT(MCUCR, ISC10);
	}
	else if (EXT_INT1_TRIGGER == EXT_INT_TRG_FALLING_EDGE){
		SET_BIT(MCUCR, ISC11);
		CLR_BIT(MCUCR, ISC10);
	}
	else if (EXT_INT1_TRIGGER == EXT_INT_TRG_RISING_EDGE){
		SET_BIT(MCUCR, ISC11);
		SET_BIT(MCUCR, ISC10);
	}
	
}