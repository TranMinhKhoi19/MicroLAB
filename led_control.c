/*
 * led_control.c
 *
 *  Created on: May 28, 2024
 *      Author: ADMIN
 */
#include "led_control.h"

void display7SEG(int k){
	switch (k){
	case 0:
		  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
		                          |LED_5_Pin|LED_6_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA, LED_7_Pin, GPIO_PIN_SET);
		break;
	case 1:
		  HAL_GPIO_WritePin(GPIOA, LED_2_Pin|LED_3_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_4_Pin
		                          |LED_5_Pin|LED_6_Pin|LED_7_Pin, GPIO_PIN_SET);
		break;
	case 2:
		  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin | LED_4_Pin
		                          |LED_5_Pin|LED_7_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA,LED_3_Pin|LED_6_Pin, GPIO_PIN_SET);
		break;
	case 3:
		  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
		                          |LED_7_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOA, LED_5_Pin|LED_6_Pin, GPIO_PIN_SET);
		break;
	case 4:
		  HAL_GPIO_WritePin(GPIOA, LED_2_Pin|LED_3_Pin |LED_6_Pin|LED_7_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_4_Pin|LED_5_Pin, GPIO_PIN_SET);
		break;
	case 5:
		  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_3_Pin|LED_4_Pin
		                          |LED_6_Pin|LED_7_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA,LED_2_Pin|LED_5_Pin, GPIO_PIN_SET);
		break;
	case 6:
		  HAL_GPIO_WritePin(GPIOA,LED_2_Pin, GPIO_PIN_SET);

		  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_3_Pin|LED_4_Pin
		                          |LED_5_Pin|LED_6_Pin|LED_7_Pin, GPIO_PIN_RESET);

		break;
	case 7:
		  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin|LED_3_Pin , GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA, LED_4_Pin |LED_5_Pin|LED_6_Pin|LED_7_Pin, GPIO_PIN_SET);
		break;
	case 8:
		  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
		                          |LED_5_Pin|LED_6_Pin|LED_7_Pin, GPIO_PIN_RESET);
		break;
	case 9:
		  HAL_GPIO_WritePin(GPIOA, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin
		                          |LED_6_Pin|LED_7_Pin, GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOA, LED_5_Pin, GPIO_PIN_SET);
		break;
	default:
		break;
	}
}

