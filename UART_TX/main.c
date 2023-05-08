#include <REGX52.H>
#include "Delay.h"
#include "UART.h"

unsigned char cnt=1;

void main()
{
	UART_Init();
	while(1)
	{
		UART_Transmit(cnt++);
		Delay(1000);
	}
}