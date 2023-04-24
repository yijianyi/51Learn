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


void main()
{
	while(1)
	{
		if(P31 == 0)
		{
			Delay(20);
			while(P31 == 0);
			P20 = ~P20;
		}
	}
}