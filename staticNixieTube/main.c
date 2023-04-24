#include <STC89C5xRC.H>
#include <Delay.h>

unsigned char NUM[] = {0X3F, 0X06, 0X5B, 0X4F, 0X66, 0X6D, 0X7D, 0X07, 0X7F, 0X6F};

void Nixie(int LEDNum,int num)
{
	switch(LEDNum)
	{
		case 1:P24 = 1;P23 = 1;P22 = 1;break;
		case 2:P24 = 1;P23 = 1;P22 = 0;break;
		case 3:P24 = 1;P23 = 0;P22 = 1;break;
		case 4:P24 = 1;P23 = 0;P22 = 0;break;
		case 5:P24 = 0;P23 = 1;P22 = 1;break;
		case 6:P24 = 0;P23 = 1;P22 = 0;break;
		case 7:P24 = 0;P23 = 0;P22 = 1;break;
		case 8:P24 = 0;P23 = 0;P22 = 0;break;
	}
	P0 = NUM[num];
	Delay(5);
}

void main()
{
	while(1)
	{
		Nixie(2, 2);
	}
}