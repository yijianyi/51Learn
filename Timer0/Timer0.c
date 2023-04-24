#include <REGX52.H>

void Timer0_init()
{
	TMOD
	TR0 = 1;
	//中断优先级设置
	PT0H = 0;
	PT0 = 0;
	//中断允许
	EA = 1;
	ET0 = 1;
}

void Timer0_Rountine()	interrupt 1
{
	
}