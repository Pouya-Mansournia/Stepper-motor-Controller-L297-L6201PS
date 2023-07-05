/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SW1_Pin GPIO_PIN_10
#define SW1_GPIO_Port GPIOB
#define SW2_Pin GPIO_PIN_12
#define SW2_GPIO_Port GPIOB
#define SW3_Pin GPIO_PIN_13
#define SW3_GPIO_Port GPIOB
#define SW4_Pin GPIO_PIN_14
#define SW4_GPIO_Port GPIOB
#define SW5_Pin GPIO_PIN_15
#define SW5_GPIO_Port GPIOB
#define SW6_Pin GPIO_PIN_12
#define SW6_GPIO_Port GPIOA
#define RES_HALF_FULL_Pin GPIO_PIN_3
#define RES_HALF_FULL_GPIO_Port GPIOB
#define DIR_OUT1_Pin GPIO_PIN_4
#define DIR_OUT1_GPIO_Port GPIOB
#define CONTROL_Pin GPIO_PIN_5
#define CONTROL_GPIO_Port GPIOB
#define ENABLE_Pin GPIO_PIN_6
#define ENABLE_GPIO_Port GPIOB
#define TIM4_CH2_OUTPUT_STEP_Pin GPIO_PIN_7
#define TIM4_CH2_OUTPUT_STEP_GPIO_Port GPIOB
#define LED_Pin GPIO_PIN_9
#define LED_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

#define SET_DIR(x)   (x ? (HAL_GPIO_WritePin(DIR_OUT1_GPIO_Port,DIR_OUT1_Pin,GPIO_PIN_SET)):(HAL_GPIO_WritePin(DIR_OUT1_GPIO_Port,DIR_OUT1_Pin,GPIO_PIN_RESET)))


#define ENABLE_M(x)       (x ? (HAL_GPIO_WritePin(ENABLE_GPIO_Port,ENABLE_Pin,GPIO_PIN_SET)):(HAL_GPIO_WritePin(ENABLE_GPIO_Port,ENABLE_Pin,GPIO_PIN_RESET)))
#define CONTROL_PIN(x)    (x ? (HAL_GPIO_WritePin( CONTROL_GPIO_Port , CONTROL_Pin , GPIO_PIN_SET)):(HAL_GPIO_WritePin( CONTROL_GPIO_Port , CONTROL_Pin , GPIO_PIN_RESET)))


#define SET_HALF_FULL_PIN(x)  (x ? (HAL_GPIO_WritePin( RES_HALF_FULL_GPIO_Port , RES_HALF_FULL_Pin , GPIO_PIN_SET)):(HAL_GPIO_WritePin( RES_HALF_FULL_GPIO_Port , RES_HALF_FULL_Pin , GPIO_PIN_RESET)))



#define READ_SW1  HAL_GPIO_ReadPin( SW1_GPIO_Port , SW1_Pin )
#define READ_SW2  HAL_GPIO_ReadPin( SW2_GPIO_Port , SW2_Pin )
#define READ_SW3  HAL_GPIO_ReadPin( SW3_GPIO_Port , SW3_Pin )
#define READ_SW4  HAL_GPIO_ReadPin( SW4_GPIO_Port , SW4_Pin )
#define READ_SW5  HAL_GPIO_ReadPin( SW5_GPIO_Port , SW5_Pin )
#define READ_SW6  HAL_GPIO_ReadPin( SW6_GPIO_Port , SW6_Pin )


#define LED_TGL HAL_GPIO_TogglePin(LED_GPIO_Port , LED_Pin)


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
