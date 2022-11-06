/*
 * input_reading.c
 *
 *  Created on: Nov 05, 2022
 *      Author: KD
 */
#include "input_reading.h"
#include "main.h"

int TimeOutForKeyPress =  300;
int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int isButton1Pressed() {
	if (button1_flag == 1) {
		button1_flag = 0;
		setTimer3(10000);
		return 1;
	}
	return 0;
}
int isButton2Pressed() {
	if (button2_flag == 1) {
		button2_flag = 0;
		setTimer3(10000);
		return 1;
	}
	return 0;
}
int isButton3Pressed() {
	if (button3_flag == 1) {
		button3_flag = 0;
		setTimer3(10000);
		return 1;
	}
	return 0;
}
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;
void getKeyInput1(){

  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  KeyReg0 = HAL_GPIO_ReadPin(RESET_GPIO_Port, RESET_Pin);
  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;
      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress = 300;
        button1_flag = 1;
      }
    } else{
    	TimeOutForKeyPress--;
		if (TimeOutForKeyPress == 0){
			if (KeyReg3 == PRESSED_STATE){
				TimeOutForKeyPress = 100;
				button1_flag = 1;
			 }
			//KeyReg3 = NORMAL_STATE;
		}
    }
  }
}
	int KeyReg02 = NORMAL_STATE;
	int KeyReg12 = NORMAL_STATE;
	int KeyReg22 = NORMAL_STATE;
	int KeyReg32 = NORMAL_STATE;
void getKeyInput2(){

  KeyReg22 = KeyReg12;
  KeyReg12 = KeyReg02;
  KeyReg02 = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
  if ((KeyReg12 == KeyReg02) && (KeyReg12 == KeyReg22)){
    if (KeyReg22 != KeyReg32){
      KeyReg32 = KeyReg22;
      if (KeyReg32 == PRESSED_STATE){
        TimeOutForKeyPress = 300;
        button2_flag = 1;
      }
    } else{
    	TimeOutForKeyPress--;
		if (TimeOutForKeyPress == 0){
			if (KeyReg32 == PRESSED_STATE){
				TimeOutForKeyPress = 100;
				button2_flag = 1;
			 }
			//KeyReg3 = NORMAL_STATE; // nếu không cần xử lý nhấn đè
		}
    }
  }
}
	int KeyReg03 = NORMAL_STATE;
	int KeyReg13 = NORMAL_STATE;
	int KeyReg23 = NORMAL_STATE;
	int KeyReg33 = NORMAL_STATE;
void getKeyInput3(){

  KeyReg23 = KeyReg13;
  KeyReg13 = KeyReg03;
  KeyReg03 = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);
  if ((KeyReg13 == KeyReg03) && (KeyReg13 == KeyReg23)){
    if (KeyReg23 != KeyReg33){
      KeyReg33 = KeyReg23;
      if (KeyReg33 == PRESSED_STATE){
        TimeOutForKeyPress = 300;
        button3_flag = 1;
      }
    } else{
    	TimeOutForKeyPress--;
		if (TimeOutForKeyPress == 0){
			if (KeyReg33 == PRESSED_STATE){
				TimeOutForKeyPress = 100;
				button3_flag = 1;
			 }
			KeyReg3 = NORMAL_STATE;
		}
    }
  }
}
