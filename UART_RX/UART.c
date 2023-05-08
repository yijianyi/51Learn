#include <REGX52.H>

void UART_Init()	//UART初始化，模式1，波特率9600，有接收,定时器1模式2
{
	PCON &= 0x7F;		
	SCON = 0x50;		
	TMOD &= 0x0F;		
	TMOD |= 0x20;		
	TL1 = 0xFD;			
	TH1 = 0xFD;			
	ET1 = 0;			
	TR1 = 1;					
}

//void UartInit(void)		//9600bps@11.0592MHz
//{
//	SCON = 0X70;
//	PCON |= 0X80;
//	TMOD &= 0x0F;	
//	TMOD |= 0x10;
//	TL1 = 0xE8;			
//	TH1 = 0xFF;			
//	ET1 = 0;			
//	TR1 = 1;	
//}



void UART_Transmit(unsigned char Byte)
{
	SBUF = Byte;
	while(TI == 0);
	TI = 0;
//	TL1 = 0xE8;			
//	TH1 = 0xFF;	
}