/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: LENOVO
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include"main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int RESET_flag;
extern int INC_flag;
extern int DEC_flag;


int isRESET_Pressed();
int isINC_Pressed();
int isDEC_Pressed();

void getKeyInput();
//void getKeyInput2();

#endif /* INC_BUTTON_H_ */
