/*
 * software_timer.c
 *
 *  Created on: May 28, 2024
 *      Author: ADMIN
 */
#include "software_timer.h"
int timer0_counter = 0;
int timer1_count = 0;
int timer2_count = 0;
int timer3_count =0;
int timer4_count =0;

int timer0_flag = 0;
int timer1_flag = 0;
int timer2_flag = 0;
int timer3_flag = 0;
int timer4_flag = 0;

int TIMER_CYCLE = 10;

void setTimer0 (int duration){
	timer0_counter = duration;
	timer0_flag = 0;
}

void setTimer1 (int duration){
	timer1_count = duration;
	timer1_flag = 0;
}
void setTimer2 (int duration){
	timer2_count = duration;
	timer2_flag = 0;
}
void setTimer3 (int duration){
	timer3_count = duration;
	timer3_flag = 0;
}
void setTimer4 (int duration){
	timer4_count = duration;
	timer4_flag = 0;
}

void timerRun(){
	if (timer0_counter > 0){
		timer0_counter--;
		if (timer0_counter <= 0){
			timer0_flag = 1;
		}
	}
	if (timer1_count > 0){
		timer1_count--;
		if (timer1_count <= 0 ){
			timer1_flag = 1;
		}
	}
	if (timer2_count > 0){
		timer2_count--;
		if (timer2_count <= 0){
			timer2_flag = 1;
		}
	}
	if (timer3_count > 0){
		timer3_count--;
		if (timer3_count <= 0){
			timer3_flag = 1;
		}
	}
	if (timer4_count > 0){
		timer4_count--;
		if (timer4_count <= 0){
			timer4_flag = 1;
		}
	}
}


