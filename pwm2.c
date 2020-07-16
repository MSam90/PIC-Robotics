/**
  Section: Included Files
*/

#include <xc.h>
#include "pwm2.h"

/**
  Section: Macro Declarations
*/

#define PWM2_INITIALIZE_DUTY_VALUE    0

/**
  Section: PWM Module APIs
*/

void PWM2_Initialize(void)
{
    // Set the PWM2 to the options selected in the User Interface
	
	// CCP2M PWM; DC2B 3; 
	CCP2CON = 0x3C;    
	
	// CCPR2L 124; 
	CCPR2L = 0x7C;    
	
	// CCPR2H 0; 
	CCPR2H = 0x00;    

	// Selecting Timer 2
	CCPTMRSbits.C2TSEL = 0x0;
    
}

void PWM2_LoadDutyValue(uint16_t dutyValue)
{
   // Writing to 8 MSBs of pwm duty cycle in CCPRL register
    CCPR2L = ((dutyValue & 0x03FC)>>2);
    
   // Writing to 2 LSBs of pwm duty cycle in CCPCON register
    CCP2CON = ((uint8_t)(CCP2CON & 0xCF) | ((dutyValue & 0x0003)<<4));
}

/**
 End of File
*/

