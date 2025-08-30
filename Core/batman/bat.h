/*
 * bat.h
 *
 *  Created on: May 23, 2025
 *      Author: tharun
 */

#ifndef BATMAN_BAT_H_
#define BATMAN_BAT_H_
#include "stm32f4xx_hal.h"
extern TIM_HandleTypeDef htim5;

extern UART_HandleTypeDef huart1;

void SetPWMDuty(uint8_t percent);


#endif /* BATMAN_BAT_H_ */
