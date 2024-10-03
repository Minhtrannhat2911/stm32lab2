/*
 * timer.h
 *
 *  Created on: Oct 2, 2024
 *      Author: Dell
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;

void settimer1(int duration);
void settimer2(int duration);
void settimer3(int duration);
void settimer4(int duration);
void timerun();

#endif /* INC_TIMER_H_ */
