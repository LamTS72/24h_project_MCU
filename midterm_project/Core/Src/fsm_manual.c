/*
 * fsm_manual.c
 *
 *  Created on: Nov 5, 2022
 *      Author: LENOVO
 */


#include "fsm_manual.h"
#include "led7_segment.h"

void fsm_manual_run(){
	switch(status){
		case HAND_ZERO:
			display7SEG(0);
			if(isINC_Pressed() == 1){
				status = HAND_ONE;
				setTimer1(1000);
			}
			if(isDEC_Pressed() == 1){
				status = HAND_NINE;
				setTimer1(1000);
			}
			if(isRESET_Pressed() == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			break;
		case HAND_ONE:
			display7SEG(1);
			if(timer1_flag == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			if(isINC_Pressed() == 1){
				status = HAND_TWO;
				setTimer1(1000);
			}
			if(isDEC_Pressed() == 1){
				status = HAND_ZERO;
				setTimer1(1000);
			}
			if(isRESET_Pressed() == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			break;
		case HAND_TWO:
			display7SEG(2);
			if(timer1_flag == 1){
				status = AUTO_ONE;
				setTimer1(100);
			}
			if(isINC_Pressed() == 1){
				status = HAND_THREE;
				setTimer1(1000);
			}
			if(isDEC_Pressed() == 1){
				status = HAND_ONE;
				setTimer1(1000);
			}
			if(isRESET_Pressed() == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			break;
		case HAND_THREE:
			display7SEG(3);
			if(timer1_flag == 1){
				status = AUTO_TWO;
				setTimer1(100);
			}
			if(isINC_Pressed() == 1){
				status = HAND_FOUR;
				setTimer1(1000);
			}
			if(isDEC_Pressed() == 1){
				status = HAND_TWO;
				setTimer1(1000);
			}
			if(isRESET_Pressed() == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			break;
		case HAND_FOUR:
			display7SEG(4);
			if(timer1_flag == 1){
				status = AUTO_THREE;
				setTimer1(100);
			}
			if(isINC_Pressed() == 1){
				status = HAND_FIVE;
				setTimer1(1000);
			}
			if(isDEC_Pressed() == 1){
				status = HAND_THREE;
				setTimer1(1000);
			}
			if(isRESET_Pressed() == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			break;
		case HAND_FIVE:
			display7SEG(5);
			if(timer1_flag == 1){
				status = AUTO_FOUR;
				setTimer1(100);
			}
			if(isINC_Pressed() == 1){
				status = HAND_SIX;
				setTimer1(1000);
			}
			if(isDEC_Pressed() == 1){
				status = HAND_FOUR;
				setTimer1(1000);
			}
			if(isRESET_Pressed() == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			break;
		case HAND_SIX:
			display7SEG(6);
			if(timer1_flag == 1){
				status = AUTO_FIVE;
				setTimer1(100);
			}
			if(isINC_Pressed() == 1){
				status = HAND_SEVEN;
				setTimer1(1000);
			}
			if(isDEC_Pressed() == 1){
				status = HAND_FIVE;
				setTimer1(1000);
			}
			if(isRESET_Pressed() == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			break;
		case HAND_SEVEN:
			display7SEG(7);
			if(timer1_flag == 1){
				status = AUTO_SIX;
				setTimer1(100);
			}
			if(isINC_Pressed() == 1){
				status = HAND_EIGTH;
				setTimer1(1000);
			}
			if(isDEC_Pressed() == 1){
				status = HAND_SIX;
				setTimer1(1000);
			}
			if(isRESET_Pressed() == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			break;
		case HAND_EIGTH:
			display7SEG(8);
			if(timer1_flag == 1){
				status = AUTO_SEVEN;
				setTimer1(100);
			}
			if(isINC_Pressed() == 1){
				status = HAND_NINE;
				setTimer1(1000);
			}
			if(isDEC_Pressed() == 1){
				status = HAND_SEVEN;
				setTimer1(1000);
			}
			if(isRESET_Pressed() == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			break;
		case HAND_NINE:
			display7SEG(9);
			if(timer1_flag == 1){
				status = AUTO_EIGTH;
				setTimer1(100);
			}
			if(isINC_Pressed() == 1){
				status = HAND_ZERO;
				setTimer1(1000);
			}
			if(isDEC_Pressed() == 1){
				status = HAND_EIGTH;
				setTimer1(1000);
			}
			if(isRESET_Pressed() == 1){
				status = AUTO_ZERO;
				setTimer1(100);
			}
			break;
		default:
			break;
	}
}
