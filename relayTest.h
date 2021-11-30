/* 
 * File:   relayTest.h
 * Author: onno
 *
 * Created on November 30, 2021, 8:00 PM
 */
#include "mcc_generated_files/mcc.h"

#ifndef RELAYTEST_H
#define	RELAYTEST_H

#ifdef	__cplusplus
extern "C" {
#endif

    int interval =50;
    
    
void toggleAll(){
   // toggleL();
   // toggleC();
}    
    
void toggleL() {
    L1_Toggle();
    wait(interval);
    L2_Toggle();
    wait(interval);
    L3_Toggle();
    wait(interval);
    L4_Toggle();
    wait(interval);
    L5_Toggle();
    wait(interval);
    L6_Toggle();
    wait(interval);
    L7_Toggle();
    wait(interval);
}

void toggleC() {

    C1_Toggle();
    wait(interval);
    C2_Toggle();
    wait(interval);
    C3_Toggle();
    wait(interval);
    C4_Toggle();
    wait(interval);
    C5_Toggle();
    wait(interval);
    C6_Toggle();
    wait(interval);
    C7_Toggle();
    wait(interval);


}


#ifdef	__cplusplus
}
#endif

#endif	/* RELAYTEST_H */

