/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SYS_LED_Pin GPIO_PIN_15
#define SYS_LED_GPIO_Port GPIOB

#define DUTY_LED_Pin GPIO_PIN_13
#define DUTY_LED_GPIO_Port GPIOB
#define CURR_LED_Pin GPIO_PIN_14
#define CURR_LED_GPIO_Port GPIOB

#define FREQ_BUTTON_Pin GPIO_PIN_11
#define FREQ_BUTTON_GPIO_Port GPIOB
#define DUTY_BUTTON_Pin GPIO_PIN_10
#define DUTY_BUTTON_GPIO_Port GPIOB
#define CURRENT_BUTTON_Pin GPIO_PIN_1
#define CURRENT_BUTTON_GPIO_Port GPIOB

#define BUTTON_CONFIRM_TIME 100	// unit 1ms

#define CURRENT_PULSE_FULLLEVEL 10
#define CURRENT_INIT 6
#define CURRENT_IDLE 2
#define CURRENT_LIMIT 10
#define CURRENT_ADD_STEP 2		// Full limit is 10

#define CURRENT_PULSE_PERIOD 10
#define DUTY_INIT 5
#define DUTY_LIMIT 5
#define DUTY_ADD_STEP 1	// Full limit is 100

extern uint8_t buttonCheckFlag;
extern uint32_t pulseCounter;

extern uint32_t pulseValueCurrent;
extern uint32_t pulseValueCurrentIdle;

extern uint32_t pulseValueDuty;


/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
