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
		P2 = 0XFD;
		Delay500ms();
		P2 = 0XFB;
		Delay500ms();
		P2 = 0XF7;
		Delay500ms();
		P2 = 0XEF;
		Delay500ms();
		P2 = 0XDF;
		Delay500ms();
		P2 = 0XBF;
		Delay500ms();
		P2 = 0X7F;
		Delay500ms();
	}
}