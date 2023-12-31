/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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
#define L1_Pin GPIO_PIN_1
#define L1_GPIO_Port GPIOA
#define L2_Pin GPIO_PIN_2
#define L2_GPIO_Port GPIOA
#define L3_Pin GPIO_PIN_3
#define L3_GPIO_Port GPIOA
#define L4_Pin GPIO_PIN_4
#define L4_GPIO_Port GPIOA
#define L5_Pin GPIO_PIN_5
#define L5_GPIO_Port GPIOA
#define L6_Pin GPIO_PIN_6
#define L6_GPIO_Port GPIOA
#define A1_Pin GPIO_PIN_7
#define A1_GPIO_Port GPIOA
#define B0_Pin GPIO_PIN_1
#define B0_GPIO_Port GPIOB
#define B1_Pin GPIO_PIN_2
#define B1_GPIO_Port GPIOB
#define A2_Pin GPIO_PIN_8
#define A2_GPIO_Port GPIOA
#define A3_Pin GPIO_PIN_9
#define A3_GPIO_Port GPIOA
#define A4_Pin GPIO_PIN_10
#define A4_GPIO_Port GPIOA
#define A5_Pin GPIO_PIN_11
#define A5_GPIO_Port GPIOA
#define A6_Pin GPIO_PIN_12
#define A6_GPIO_Port GPIOA
#define A7_Pin GPIO_PIN_13
#define A7_GPIO_Port GPIOA
#define B2_Pin GPIO_PIN_3
#define B2_GPIO_Port GPIOB
#define B3_Pin GPIO_PIN_4
#define B3_GPIO_Port GPIOB
#define B4_Pin GPIO_PIN_5
#define B4_GPIO_Port GPIOB
#define B5_Pin GPIO_PIN_6
#define B5_GPIO_Port GPIOB
#define B6_Pin GPIO_PIN_7
#define B6_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
