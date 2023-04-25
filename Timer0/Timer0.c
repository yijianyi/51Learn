#include <REGX52.H>

//void Timer0_init()
//{
//	//���ù���ģʽ
//	TMOD &= 0XF0;
//	TMOD |= 0X01;
//	TR0 = 1;
//	//�ж����ȼ�����
//	PT0H = 0;
//	PT0 = 0;
//	//����TH0,TL0��ʼ����
//	TH0 = 64535 / 256;
//	TL0 = 64535 % 256 + 1;
//	//�ж�����
//	EA = 1;
//	ET0 = 1;
//}
static int time = 0;

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
	//static int time;
	TL0 = 0x66;				
	TH0 = 0xFC;	
	time++;
	if(time >= 1000)
	{
		P2_0 = ~P2_0;
		time = 0;
	}
//	TL0 = 0xCD;				
//	TH0 = 0xD4;
}