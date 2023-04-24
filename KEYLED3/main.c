#include <STC89C5xRC.H>
#include <INTRINS.H>

void Delay(unsigned int x)
{
	unsigned char i, j;

	for(;x;x--)
	{
		_nop_();
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
	}
}

unsigned char reverseBit(unsigned char num)
{
	unsigned char result = 0;
	int i = 0;
	unsigned char judge = 0x80;
	for(;i < 8;i++)
	{
		result = result >> 1;
		if(num&judge)
		{
			result=result|0x80;
		}
		judge = judge >> 1;
	}
	return result;
}

void main()
{
	unsigned char LEDNum = 0;
	while(1)
	{
		if(P31 == 0)
		{
			Delay(20);
			while(P31 == 0);
			Delay(5);
			LEDNum++;
			P2 = ~reverseBit(LEDNum);
		}
	}
}