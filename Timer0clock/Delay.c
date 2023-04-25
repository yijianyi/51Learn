#include "Delay.h"
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