/*
 * Smart_Home.c
 *
 * Created: 9/26/2021 6:31:47 PM
 * Author : abdel
 */ 


#include "Smart_Home.h"

int main(void)
{
	Smart_Home_TX_INT();	
	while (1)
	{
		Smart_Home_TX_Start();
	}
}


