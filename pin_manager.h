#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)

// get/set IN1 aliases
#define IN1_TRIS                 TRISCbits.TRISC1
#define IN1_LAT                  LATCbits.LATC1
#define IN1_PORT                 PORTCbits.RC1
#define IN1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IN1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IN1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IN1_GetValue()           PORTCbits.RC1
#define IN1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IN1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)

// get/set IN2 aliases
#define IN2_TRIS                 TRISCbits.TRISC3
#define IN2_LAT                  LATCbits.LATC3
#define IN2_PORT                 PORTCbits.RC3
#define IN2_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IN2_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IN2_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IN2_GetValue()           PORTCbits.RC3
#define IN2_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IN2_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set IN3 aliases
#define IN3_TRIS                 TRISCbits.TRISC4
#define IN3_LAT                  LATCbits.LATC4
#define IN3_PORT                 PORTCbits.RC4
#define IN3_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IN3_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IN3_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IN3_GetValue()           PORTCbits.RC4
#define IN3_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IN3_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set IN4 aliases
#define IN4_TRIS                 TRISCbits.TRISC5
#define IN4_LAT                  LATCbits.LATC5
#define IN4_PORT                 PORTCbits.RC5
#define IN4_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IN4_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IN4_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IN4_GetValue()           PORTCbits.RC5
#define IN4_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IN4_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

// get/set LEDL aliases
#define LEDL_TRIS                 TRISDbits.TRISD0
#define LEDL_LAT                  LATDbits.LATD0
#define LEDL_PORT                 PORTDbits.RD0
#define LEDL_ANS                  ANCON1bits.ANSEL11
#define LEDL_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define LEDL_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define LEDL_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define LEDL_GetValue()           PORTDbits.RD0
#define LEDL_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define LEDL_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define LEDL_SetAnalogMode()      do { ANCON1bits.ANSEL11 = 1; } while(0)
#define LEDL_SetDigitalMode()     do { ANCON1bits.ANSEL11 = 0; } while(0)

// get/set LEDR aliases
#define LEDR_TRIS                 TRISDbits.TRISD1
#define LEDR_LAT                  LATDbits.LATD1
#define LEDR_PORT                 PORTDbits.RD1
#define LEDR_ANS                  ANCON1bits.ANSEL12
#define LEDR_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define LEDR_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define LEDR_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define LEDR_GetValue()           PORTDbits.RD1
#define LEDR_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define LEDR_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define LEDR_SetAnalogMode()      do { ANCON1bits.ANSEL12 = 1; } while(0)
#define LEDR_SetDigitalMode()     do { ANCON1bits.ANSEL12 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/