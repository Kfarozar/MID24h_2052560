/*
 * software_timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: KD
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;


extern int timer1_counter;
extern int timer2_counter;
extern int timer3_counter;



void setTimer1(int duration);
void clearTimer1();

void setTimer2(int duration);
void clearTimer2();

void setTimer3(int duration);
void clearTimer3();

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
