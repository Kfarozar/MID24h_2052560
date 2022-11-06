/*
 * input_reading.h
 *
 *  Created on: Nov 6, 2022
 *      Author: KD
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#define NO_OF_BUTTON					3

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

 int button1_flag;
 int button2_flag;
 int button3_flag;

 int isButton1Pressed();
 int isButton2Pressed();
 int isButton3Pressed();

int TimerForKeyPress;

void getKeyInput1();
void getKeyInput2();
void getKeyInput3();

#endif /* INC_INPUT_READING_H_ */
