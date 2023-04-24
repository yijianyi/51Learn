#include <STC89C5xRC.H>
#include "Delay.h"

void main()
{
	unsigned char LEDNum = 0x80;
	while(1)
	{
		if(P31==0)
		{
			Delay(20);
			while(P31==0);
			Delay(5);
			
			P2 = ~LEDNum;
			LEDNum = LEDNum >> 1;
			if(!LEDNum)
			{
				LEDNum = 0x80;
			}
		}
	}
}