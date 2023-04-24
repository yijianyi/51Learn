#include <REGX52.H>
#include "MatrixKey.h"
#include "Delay.h"
#include "LCD1602.h"

void main()
{
	unsigned char keyValue;
	LCD_Init();
	LCD_ShowString(1,1,"KEY:");
	while(1)
	{
		keyValue = MatrixKey();
		if(keyValue)
		{
			LCD_ShowNum(2,1,keyValue,2);
		}
	}
}