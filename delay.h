/* 
 * File:   delay.h
 * Author: onno
 *
 * Created on November 30, 2021, 7:59 PM
 */

#ifndef DELAY_H
#define	DELAY_H

#ifdef	__cplusplus
extern "C" {
#endif

void wait(int milliseconds) {
   
   while(milliseconds > 0)
   {
       __delay_ms(1);
      milliseconds--;
    }
 }

void idle(){
   
   wait(2000) ;
   
}


#ifdef	__cplusplus
}
#endif

#endif	/* DELAY_H */

