/*
 * software_timer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: KD
 */

#include "main.h"
#include "software_timer.h"


 int timer1_counter = 0;
 int timer1_flag = 0;

 int timer2_counter = 0;
 int timer2_flag = 0;

 int timer3_counter = 0;
 int timer3_flag = 0;

#define TIMER1_CYCLE 	10
#define TIMER2_CYCLE 	10
#define TIMER3_CYCLE 	10


void setTimer1 (int duration ) {
 	timer1_counter = duration/TIMER1_CYCLE ;
 	timer1_flag = 0;
 }

void setTimer2 (int duration ) {
 	timer2_counter = duration/TIMER2_CYCLE ;
 	timer2_flag = 0;
 }

void setTimer3 (int duration ) {
 	timer3_counter = duration/TIMER3_CYCLE ;
 	timer3_flag = 0;
 }

void timerRun () {
	if( timer1_counter > 0){
		timer1_counter--;
		if( timer1_counter <= 0){
			timer1_flag = 1;
		}
	}
	if( timer2_counter > 0){
		timer2_counter--;
		if( timer2_counter <= 0){
			timer2_flag = 1;
		}
	}
	if( timer3_counter > 0){
			timer3_counter--;
			if( timer3_counter <= 0){
				timer3_flag = 1;
			}
		}
}
