#include <REGX52.H>
#include "LCD1602.h"
#include "Delay.h"


void main()
{
	LCD_Init();
	while(1)
	{
		LCD_ShowString(1,1,"hello");
		Delay(500);
		LCD_Init();
		LCD_ShowString(2,1,"world");
		Delay(500);
		LCD_Init();
	}
}