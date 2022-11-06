/*
 * led_display.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Hp
 */

#include "led_display.h"
#include "software_timer.h"
#include "main.h"


void display7SEG(int number){
	switch(number){
		case 0:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, SET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, SET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, SET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, SET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, SET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, RESET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, RESET);
			HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, RESET);
			HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, RESET);
			HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, RESET);
			HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, SET);
			HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, RESET);
			HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, RESET);
		default:
			break;
	}
}
