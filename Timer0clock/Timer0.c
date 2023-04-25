#include <REGX52.H>

int timeCount = 0;
int time = 0;

void Timer0_Init(void)		
{
				
	TMOD &= 0xF0;			
	TMOD |= 0x01;			
	TL0 = 0x66;				
	TH0 = 0xFC;				
	TF0 = 0;				
	TR0 = 1;				
	
	PT0 = 0;
	EA = 1;
	ET0 = 1;
}



void Timer0_Routine()	interrupt 1
{
	TL0 = 0x66;				
	TH0 = 0xFC;	
	timeCount++;
	if(timeCount >= 1000)
	{
		time++;
		timeCount = 0;
	}

}