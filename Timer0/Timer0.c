#include <REGX52.H>

void Timer0_init()
{
	TMOD
	TR0 = 1;
	//�ж����ȼ�����
	PT0H = 0;
	PT0 = 0;
	//�ж�����
	EA = 1;
	ET0 = 1;
}

void Timer0_Rountine()	interrupt 1
{
	
}