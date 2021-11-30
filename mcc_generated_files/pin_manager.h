/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1938
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

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

// get/set FWD aliases
#define FWD_TRIS                 TRISAbits.TRISA0
#define FWD_LAT                  LATAbits.LATA0
#define FWD_PORT                 PORTAbits.RA0
#define FWD_ANS                  ANSELAbits.ANSA0
#define FWD_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define FWD_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define FWD_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define FWD_GetValue()           PORTAbits.RA0
#define FWD_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define FWD_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define FWD_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define FWD_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RVS aliases
#define RVS_TRIS                 TRISAbits.TRISA1
#define RVS_LAT                  LATAbits.LATA1
#define RVS_PORT                 PORTAbits.RA1
#define RVS_ANS                  ANSELAbits.ANSA1
#define RVS_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RVS_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RVS_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RVS_GetValue()           PORTAbits.RA1
#define RVS_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RVS_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RVS_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define RVS_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set L2 aliases
#define L2_TRIS                 TRISAbits.TRISA2
#define L2_LAT                  LATAbits.LATA2
#define L2_PORT                 PORTAbits.RA2
#define L2_ANS                  ANSELAbits.ANSA2
#define L2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define L2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define L2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define L2_GetValue()           PORTAbits.RA2
#define L2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define L2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define L2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define L2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set L4 aliases
#define L4_TRIS                 TRISAbits.TRISA3
#define L4_LAT                  LATAbits.LATA3
#define L4_PORT                 PORTAbits.RA3
#define L4_ANS                  ANSELAbits.ANSA3
#define L4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define L4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define L4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define L4_GetValue()           PORTAbits.RA3
#define L4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define L4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define L4_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define L4_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set L7 aliases
#define L7_TRIS                 TRISAbits.TRISA4
#define L7_LAT                  LATAbits.LATA4
#define L7_PORT                 PORTAbits.RA4
#define L7_ANS                  ANSELAbits.ANSA4
#define L7_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define L7_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define L7_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define L7_GetValue()           PORTAbits.RA4
#define L7_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define L7_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define L7_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define L7_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set L6 aliases
#define L6_TRIS                 TRISAbits.TRISA5
#define L6_LAT                  LATAbits.LATA5
#define L6_PORT                 PORTAbits.RA5
#define L6_ANS                  ANSELAbits.ANSA5
#define L6_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define L6_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define L6_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define L6_GetValue()           PORTAbits.RA5
#define L6_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define L6_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define L6_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define L6_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set TX_REQ aliases
#define TX_REQ_TRIS                 TRISAbits.TRISA6
#define TX_REQ_LAT                  LATAbits.LATA6
#define TX_REQ_PORT                 PORTAbits.RA6
#define TX_REQ_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define TX_REQ_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define TX_REQ_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define TX_REQ_GetValue()           PORTAbits.RA6
#define TX_REQ_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define TX_REQ_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set TX_REQ_INV aliases
#define TX_REQ_INV_TRIS                 TRISAbits.TRISA7
#define TX_REQ_INV_LAT                  LATAbits.LATA7
#define TX_REQ_INV_PORT                 PORTAbits.RA7
#define TX_REQ_INV_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define TX_REQ_INV_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define TX_REQ_INV_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define TX_REQ_INV_GetValue()           PORTAbits.RA7
#define TX_REQ_INV_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define TX_REQ_INV_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set BUTTON aliases
#define BUTTON_TRIS                 TRISBbits.TRISB0
#define BUTTON_LAT                  LATBbits.LATB0
#define BUTTON_PORT                 PORTBbits.RB0
#define BUTTON_WPU                  WPUBbits.WPUB0
#define BUTTON_ANS                  ANSELBbits.ANSB0
#define BUTTON_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define BUTTON_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define BUTTON_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define BUTTON_GetValue()           PORTBbits.RB0
#define BUTTON_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define BUTTON_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define BUTTON_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define BUTTON_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define BUTTON_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define BUTTON_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set BYPASS aliases
#define BYPASS_TRIS                 TRISBbits.TRISB1
#define BYPASS_LAT                  LATBbits.LATB1
#define BYPASS_PORT                 PORTBbits.RB1
#define BYPASS_WPU                  WPUBbits.WPUB1
#define BYPASS_ANS                  ANSELBbits.ANSB1
#define BYPASS_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define BYPASS_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define BYPASS_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define BYPASS_GetValue()           PORTBbits.RB1
#define BYPASS_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define BYPASS_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define BYPASS_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define BYPASS_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define BYPASS_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define BYPASS_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set AUTO aliases
#define AUTO_TRIS                 TRISBbits.TRISB2
#define AUTO_LAT                  LATBbits.LATB2
#define AUTO_PORT                 PORTBbits.RB2
#define AUTO_WPU                  WPUBbits.WPUB2
#define AUTO_ANS                  ANSELBbits.ANSB2
#define AUTO_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define AUTO_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define AUTO_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define AUTO_GetValue()           PORTBbits.RB2
#define AUTO_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define AUTO_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define AUTO_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define AUTO_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define AUTO_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define AUTO_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set L1 aliases
#define L1_TRIS                 TRISBbits.TRISB3
#define L1_LAT                  LATBbits.LATB3
#define L1_PORT                 PORTBbits.RB3
#define L1_WPU                  WPUBbits.WPUB3
#define L1_ANS                  ANSELBbits.ANSB3
#define L1_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define L1_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define L1_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define L1_GetValue()           PORTBbits.RB3
#define L1_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define L1_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define L1_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define L1_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define L1_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define L1_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set L3 aliases
#define L3_TRIS                 TRISBbits.TRISB4
#define L3_LAT                  LATBbits.LATB4
#define L3_PORT                 PORTBbits.RB4
#define L3_WPU                  WPUBbits.WPUB4
#define L3_ANS                  ANSELBbits.ANSB4
#define L3_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define L3_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define L3_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define L3_GetValue()           PORTBbits.RB4
#define L3_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define L3_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define L3_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define L3_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define L3_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define L3_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set L5 aliases
#define L5_TRIS                 TRISBbits.TRISB5
#define L5_LAT                  LATBbits.LATB5
#define L5_PORT                 PORTBbits.RB5
#define L5_WPU                  WPUBbits.WPUB5
#define L5_ANS                  ANSELBbits.ANSB5
#define L5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define L5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define L5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define L5_GetValue()           PORTBbits.RB5
#define L5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define L5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define L5_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define L5_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define L5_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define L5_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set CLK aliases
#define CLK_TRIS                 TRISBbits.TRISB6
#define CLK_LAT                  LATBbits.LATB6
#define CLK_PORT                 PORTBbits.RB6
#define CLK_WPU                  WPUBbits.WPUB6
#define CLK_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define CLK_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define CLK_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define CLK_GetValue()           PORTBbits.RB6
#define CLK_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define CLK_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define CLK_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define CLK_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set DAT aliases
#define DAT_TRIS                 TRISBbits.TRISB7
#define DAT_LAT                  LATBbits.LATB7
#define DAT_PORT                 PORTBbits.RB7
#define DAT_WPU                  WPUBbits.WPUB7
#define DAT_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define DAT_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define DAT_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define DAT_GetValue()           PORTBbits.RB7
#define DAT_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define DAT_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define DAT_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define DAT_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

// get/set IO aliases
#define IO_TRIS                 TRISCbits.TRISC0
#define IO_LAT                  LATCbits.LATC0
#define IO_PORT                 PORTCbits.RC0
#define IO_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IO_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IO_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IO_GetValue()           PORTCbits.RC0
#define IO_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IO_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set C6 aliases
#define C6_TRIS                 TRISCbits.TRISC1
#define C6_LAT                  LATCbits.LATC1
#define C6_PORT                 PORTCbits.RC1
#define C6_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define C6_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define C6_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define C6_GetValue()           PORTCbits.RC1
#define C6_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define C6_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set C4 aliases
#define C4_TRIS                 TRISCbits.TRISC2
#define C4_LAT                  LATCbits.LATC2
#define C4_PORT                 PORTCbits.RC2
#define C4_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define C4_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define C4_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define C4_GetValue()           PORTCbits.RC2
#define C4_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define C4_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)

// get/set C2 aliases
#define C2_TRIS                 TRISCbits.TRISC3
#define C2_LAT                  LATCbits.LATC3
#define C2_PORT                 PORTCbits.RC3
#define C2_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define C2_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define C2_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define C2_GetValue()           PORTCbits.RC3
#define C2_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define C2_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set C7 aliases
#define C7_TRIS                 TRISCbits.TRISC4
#define C7_LAT                  LATCbits.LATC4
#define C7_PORT                 PORTCbits.RC4
#define C7_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define C7_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define C7_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define C7_GetValue()           PORTCbits.RC4
#define C7_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define C7_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set C5 aliases
#define C5_TRIS                 TRISCbits.TRISC5
#define C5_LAT                  LATCbits.LATC5
#define C5_PORT                 PORTCbits.RC5
#define C5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define C5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define C5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define C5_GetValue()           PORTCbits.RC5
#define C5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define C5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

// get/set C3 aliases
#define C3_TRIS                 TRISCbits.TRISC6
#define C3_LAT                  LATCbits.LATC6
#define C3_PORT                 PORTCbits.RC6
#define C3_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define C3_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define C3_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define C3_GetValue()           PORTCbits.RC6
#define C3_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define C3_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

// get/set C1 aliases
#define C1_TRIS                 TRISCbits.TRISC7
#define C1_LAT                  LATCbits.LATC7
#define C1_PORT                 PORTCbits.RC7
#define C1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define C1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define C1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define C1_GetValue()           PORTCbits.RC7
#define C1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define C1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

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