/*
 * global.c
 *
 *  Created on: Nov 5, 2022
 *      Author: LENOVO
 */

#include"global.h"

int status = 0;

void led_blinky(){
	if(timer2_flag == 1){
		setTimer2(100);
		HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
	}
}
