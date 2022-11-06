/*
 * fsm_simple_buttons_run.c
 *
 *  Created on: Nov 5, 2022
 *      Author: KD
 */

#include "global.h"
#include "led_display.h"
#include "input_reading.h"


void fsm_simple_buttons_run () {
	 switch ( stage ) {
		 case INIT :
			 stage = RESET_BUTTON_PRESSED ;
			 break ;

		 case RESET_BUTTON_PRESSED :
			 counter = 0;
			 display7SEG (counter);
			 if (isButton2Pressed() == 1) {
			 stage = INC_BUTTON_PRESSED ;
			 counter ++;
			 }
			 if (isButton3Pressed() == 1) {
			 stage = DEC_BUTTON_PRESSED ;
			 counter = 9;
			 }
			 break ;

		 case INC_BUTTON_PRESSED :
			 if (counter > 9) counter = 0;
			 if ( isButton2Pressed()== 1) {
			 counter ++;
			 if (counter > 9) counter = 0;
			 }
			 display7SEG(counter);
			 if (isButton1Pressed() == 1)
				 stage = RESET_BUTTON_PRESSED ;
			 if (isButton3Pressed() == 1) {
			 stage = DEC_BUTTON_PRESSED ;
			 counter --;
			 }
			 break ;

		 case DEC_BUTTON_PRESSED:
			 if(counter < 0) counter = 9;
			 if(isButton3Pressed() == 1){
				 counter--;
			 	 if(counter < 0) counter = 9;
			 }
			 display7SEG(counter);
			 if(isButton1Pressed() == 1) {
				 stage = RESET_BUTTON_PRESSED;
			 }
			 if(isButton2Pressed() == 1) {
				 stage = INC_BUTTON_PRESSED;
				 counter++;
			 }
			 break;

		 default:
			 break;
	 }
}
