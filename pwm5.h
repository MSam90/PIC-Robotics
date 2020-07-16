#ifndef PWM5_H
#define PWM5_H

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
    Initializes the PWM5

  @Description
    This routine initializes the PWM5 module.
    This routine must be called before any other PWM5 routine is called.
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

    CCP5_Initialize();
	PWM5_LoadDutyValue(dutycycle);
    </code>
 */
void PWM5_Initialize(void);

/**
  @Summary
    Loads 16-bit duty cycle.

  @Description
    This routine loads the 16 bit duty cycle value.

  @Preconditions
    PWM5_Initialize() function should have been called
    before calling this function.

  @Param
    Pass 16bit duty cycle value.

  @Returns
    None

  @Example
    <code>
    uint16_t dutycycle;

    PWM5_Initialize();
    PWM5_LoadDutyValue(dutycycle);
    </code>
*/
void PWM5_LoadDutyValue(uint16_t dutyValue);

        
#ifdef __cplusplus  // Provide C++ Compatibility

    }

#endif

#endif	//PWM5_H
/**
 End of File
*/
