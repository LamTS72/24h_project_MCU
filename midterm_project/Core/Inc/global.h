/*
 * global.h
 *
 *  Created on: Nov 5, 2022
 *      Author: LENOVO
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_


#include "software_timer.h"
#include "button.h"
#include"main.h"

#define INIT 		0
#define AUTO_ZERO 	1
#define AUTO_ONE    2
#define AUTO_TWO	3
#define AUTO_THREE	4
#define AUTO_FOUR	5
#define AUTO_FIVE	6
#define AUTO_SIX	7
#define AUTO_SEVEN	8
#define AUTO_EIGTH	9
#define AUTO_NINE	10

#define HAND_ZERO 	11
#define HAND_ONE 	12
#define HAND_TWO 	13
#define HAND_THREE 	14
#define HAND_FOUR 	15
#define HAND_FIVE 	16
#define HAND_SIX 	17
#define HAND_SEVEN 	18
#define HAND_EIGTH 	19
#define HAND_NINE  	20


extern int status;
void led_blinky();

#endif /* INC_GLOBAL_H_ */
