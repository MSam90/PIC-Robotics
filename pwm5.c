/**
  Section: Included Files
*/

#include <xc.h>
#include "pwm5.h"

/**
  Section: Macro Declarations
*/

#define PWM5_INITIALIZE_DUTY_VALUE    0

/**
  Section: PWM Module APIs
*/

void PWM5_Initialize(void)
{
    // Set the PWM5 to the options selected in the User Interface
	
	// CCP5M PWM; DC5B 3; 
	CCP5CON = 0x3C;    
	
	// CCPR5L 124; 
	CCPR5L = 0x7C;    
	
	// CCPR5H 0; 
	CCPR5H = 0x00;    

	// Selecting Timer 2
	CCPTMRSbits.C5TSEL = 0x0;
    
}

void PWM5_LoadDutyValue(uint16_t dutyValue)
{
   // Writing to 8 MSBs of pwm duty cycle in CCPRL register
    CCPR5L = ((dutyValue & 0x03FC)>>2);
    
   // Writing to 2 LSBs of pwm duty cycle in CCPCON register
    CCP5CON = ((uint8_t)(CCP5CON & 0xCF) | ((dutyValue & 0x0003)<<4));
}

/**
 End of File
*/

