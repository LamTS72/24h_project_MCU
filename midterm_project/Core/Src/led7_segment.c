/*
 * led7_segment.c
 *
 *  Created on: Nov 5, 2022
 *      Author: LENOVO
 */


#include"led7_segment.h"
#include"main.h"

static uint8_t signal[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x12, 0x82, 0xF8, 0x80, 0x90};


void display7SEG(int num){
   	for(int i = 0; i < 7; i++ ){
   		HAL_GPIO_WritePin(LED7_0_GPIO_Port, LED7_0_Pin << i, (signal[num] >> i) & 0x01);
   	}
 }
