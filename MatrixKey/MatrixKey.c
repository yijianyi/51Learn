#include <REGX52.H>
#include "MatrixKey.h"
#include "Delay.h"

unsigned char MatrixKey()
{
	unsigned char keyValue = 0;
	
	P1 = 0xFF;
	P1_3 = 0;
	if(P1_7 == 0){Delay(10);while(P1_7==0);keyValue = 1;}
	if(P1_6 == 0){Delay(10);while(P1_6==0);keyValue = 5;}
	if(P1_5 == 0){Delay(10);while(P1_5==0);keyValue = 9;}
	if(P1_4 == 0){Delay(10);while(P1_4==0);keyValue = 13;}
	
	P1 = 0xFF;
	P1_2 = 0;
	if(P1_7 == 0){Delay(10);while(P1_7==0);keyValue = 2;}
	if(P1_6 == 0){Delay(10);while(P1_6==0);keyValue = 6;}
	if(P1_5 == 0){Delay(10);while(P1_5==0);keyValue = 10;}
	if(P1_4 == 0){Delay(10);while(P1_4==0);keyValue = 14;}
	
	P1 = 0xFF;
	P1_1 = 0;
	if(P1_7 == 0){Delay(10);while(P1_7==0);keyValue = 3;}
	if(P1_6 == 0){Delay(10);while(P1_6==0);keyValue = 7;}
	if(P1_5 == 0){Delay(10);while(P1_5==0);keyValue = 11;}
	if(P1_4 == 0){Delay(10);while(P1_4==0);keyValue = 15;}
	
	P1 = 0xFF;
	P1_0 = 0;
	if(P1_7 == 0){Delay(10);while(P1_7==0);keyValue = 4;}
	if(P1_6 == 0){Delay(10);while(P1_6==0);keyValue = 8;}
	if(P1_5 == 0){Delay(10);while(P1_5==0);keyValue = 12;}
	if(P1_4 == 0){Delay(10);while(P1_4==0);keyValue = 16;}
	
	return keyValue;
}