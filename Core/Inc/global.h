/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: KD
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "fsm_simple_buttons_run.h"
#include "input_reading.h"
#include "led_display.h"

#define INIT 1
#define RESET_BUTTON_PRESSED 2
#define INC_BUTTON_PRESSED 3
#define DEC_BUTTON_PRESSED 4
#define AUTO_COUNTDOWN 5

extern int stage;
extern int counter;

#endif /* INC_GLOBAL_H_ */
