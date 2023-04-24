#include <STC89C5xRC.H>
#include <INTRINS.h>

void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	while(1)
	{
		P2 = 0XFE;
		Delay500ms();
		P2 = 0XFF;
		Delay500ms();
	}
}