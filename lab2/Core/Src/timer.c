/*
 * timer.c
 *
 *  Created on: Oct 2, 2024
 *      Author: Dell
 */
#include "timer.h"

int time_cycle = 10;
int time_counter1 = 0;
int time_counter2 = 0;
int time_counter3 = 0;
int time_counter4 = 0;
int timer1_flag = 0;
int timer2_flag = 0;
int timer3_flag = 0;
int timer4_flag = 0;

void settimer1(int duration){
	time_counter1 = duration;
	timer1_flag = 0;
}
void settimer2(int duration){
	time_counter2 = duration/time_cycle;
	timer2_flag = 0;
}
void settimer3(int duration){
	time_counter3 = duration/time_cycle;
	timer3_flag = 0;
}
void settimer4(int duration){
	time_counter4 = duration/time_cycle;
	timer4_flag = 0;
}
void timerun(){
	if(time_counter1 > 0){
		time_counter1--;
		if(time_counter1 <= 0){
			timer1_flag=1;
		}
	}
	if(time_counter2 > 0){
		time_counter2--;
		if(time_counter2 <= 0){
			timer2_flag = 1;
		}
	}
	if(time_counter3 > 0){
		time_counter3--;
		if(time_counter3 <= 0){
			timer3_flag = 1;
		}
	}
	if(time_counter4 > 0){
		time_counter4--;
		if(time_counter4 <= 0){
			timer4_flag = 1;
		}
	}
}
