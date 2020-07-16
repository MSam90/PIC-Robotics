#ifndef PWM2_H
#define PWM2_H

/**
  Section: Included Files
*/

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus  // Provide C++ Compatibility

    extern "C" {

#endif

/**
  Section: PWM Module APIs
*/

/**
  @Summary
    Initializes the PWM2

  @Description
    This routine initializes the PWM2 module.
    This routine must be called before any other PWM2 routine is called.
    This routine should only be called once during system initialization.

  @Preconditions
    None

  @Param
    None

  @Returns
    None

  @Comment
    

 @Example
    <code>
    uint16_t dutycycle;

    CCP2_Initialize();
	PWM2_LoadDutyValue(dutycycle);
    </code>
 */
void PWM2_Initialize(void);

/**
  @Summary
    Loads 16-bit duty cycle.

  @Description
    This routine loads the 16 bit duty cycle value.

  @Preconditions
    PWM2_Initialize() function should have been called
    before calling this function.

  @Param
    Pass 16bit duty cycle value.

  @Returns
    None

  @Example
    <code>
    uint16_t dutycycle;

    PWM2_Initialize();
    PWM2_LoadDutyValue(dutycycle);
    </code>
*/
void PWM2_LoadDutyValue(uint16_t dutyValue);

        
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif	//PWM2_H
/**
 End of File
*/
