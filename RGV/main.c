#include <xc.h>
#include "mcc.h"

const int LT = 1638;
const int HT = 2457;
const uint16_t sValue = 0;

uint8_t cmd;
char data [4];

uint16_t xValue;
uint16_t yValue;

char dir;

char direction(uint16_t x_axis, uint16_t y_axis);
void driveMode();
void movement(char direction);
void mode(uint8_t input);
void toggleLight();
int atoi(const  char *str);

void main(void)
 {
	SYSTEM_Initialize();
	PWM2_LoadDutyValue(sValue);
	PWM5_LoadDutyValue(sValue);
	 
   while (1)
   {
		cmd = EUSART1_Read();
		mode(cmd);
   };
   
 }
 
void mode(uint8_t input)
 {
	 switch(input)
	 {
		case 'D':
			driveMode();
		break;
		
		case 'L':
			toggleLight();
		break;
		
		default:
		break;
	 }
 }
 
 void toggleLight()
 {
	LEDL_Toggle();
	LEDR_Toggle();
 }
 
 void driveMode()
 {
		for(int i = 0; i < 4; i++)
		{
			data[i] = EUSART1_Read();
		}
		
		xValue = atoi(data);
			
		for(int i = 0; i < 4; i++)
		{
			data[i] = EUSART1_Read();
		}
		
		yValue = atoi(data);
			
		dir = direction(xValue, yValue);
		xValue = xValue/4;
		yValue = yValue/4;
		movement(dir);
 }
 
char direction(uint16_t x_axis, uint16_t y_axis)
{
	
	if(x_axis <= LT || x_axis >= HT)
	{
		if(x_axis <= LT)
			return 'L';
		else if(x_axis >= HT)
			return 'R';
	}
	else if(y_axis <= LT || y_axis >= HT)
	{
		if(y_axis <= LT)
			return 'F';
		else if(y_axis >= HT)
			return 'B';
	}
	else
	{
		return 'S';
	}
	
	return 'X';
}

void movement(char direction)
{
	switch(direction)
	{
		case 'L':
			PWM2_LoadDutyValue(xValue);
			PWM5_LoadDutyValue(xValue);
			IN1_SetLow();
			IN2_SetHigh();
			IN3_SetHigh();
			IN4_SetLow();
		break;
		
		case 'R':
			PWM2_LoadDutyValue(xValue);
			PWM5_LoadDutyValue(xValue);
			IN1_SetHigh();
			IN2_SetLow();
			IN3_SetLow();
			IN4_SetHigh();
		break;
		
		case 'F':
			PWM2_LoadDutyValue(yValue);
			PWM5_LoadDutyValue(yValue);
			IN1_SetHigh();
			IN2_SetLow();
			IN3_SetHigh();
			IN4_SetLow();
		break;
		
		case 'B':
			PWM2_LoadDutyValue(yValue);
			PWM5_LoadDutyValue(yValue);
			IN1_SetLow();
			IN2_SetHigh();
			IN3_SetLow();
			IN4_SetHigh();
		break;
		
		case 'S':
			PWM2_LoadDutyValue(sValue);
			PWM5_LoadDutyValue(sValue);
			IN1_SetHigh();
			IN2_SetHigh();
			IN3_SetHigh();
			IN4_SetHigh();
		break;
		
		case 'X':
			PWM2_LoadDutyValue(sValue);
			PWM5_LoadDutyValue(sValue);
			IN1_SetLow();
			IN2_SetLow();
			IN3_SetLow();
			IN4_SetLow();
		break;
			
		
		default:
			PWM2_LoadDutyValue(sValue);
			PWM5_LoadDutyValue(sValue);
			IN1_SetLow();
			IN2_SetLow();
			IN3_SetLow();
			IN4_SetLow();
		break;
			
	}
}






