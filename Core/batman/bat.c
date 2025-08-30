/*
 * bat.c
 *
 *  Created on: May 23, 2025
 *      Author: tharun
 */


#include "bat.h"
#include "main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void SetPWMDuty(uint8_t percent)
{
    if (percent > 100) percent = 100;
    uint32_t arr = __HAL_TIM_GET_AUTORELOAD(&htim5);
    uint32_t pulse = (percent * arr) / 100;
    __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_4, pulse);

    char msg[32];
    sprintf(msg, "Duty cycles: %d%%\r\n", percent);
    HAL_UART_Transmit(&huart1, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY);
}
