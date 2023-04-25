#include <REGX52.H>
#include "LCD1602.h"
#include "Timer0.h"

extern int time;

void main()
{
	int hour;
	int minute;
	int second;
	Timer0_Init();
	LCD_Init();
	LCD_ShowString(1,1,"Time:");
	while(1)
	{
		hour = time / 3600;
		minute = time / 60 - hour * 60;
		second = time % 60;
		LCD_ShowNum(2,1,hour,2);
		LCD_ShowChar(2,3,':');
		LCD_ShowNum(2,4,minute,2);
		LCD_ShowChar(2,6,':');
		LCD_ShowNum(2,7,second,2);
	}
}