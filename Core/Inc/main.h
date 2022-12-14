/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f4xx_hal.h"

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
#define CURRENT_C_Pin GPIO_PIN_0
#define CURRENT_C_GPIO_Port GPIOC
#define TEMPERATURE_SENSOR_Pin GPIO_PIN_1
#define TEMPERATURE_SENSOR_GPIO_Port GPIOC
#define CURRENT_DC_Pin GPIO_PIN_2
#define CURRENT_DC_GPIO_Port GPIOC
#define CURRENT_A_Pin GPIO_PIN_0
#define CURRENT_A_GPIO_Port GPIOA
#define CURRENT_B_Pin GPIO_PIN_1
#define CURRENT_B_GPIO_Port GPIOA
#define VOLTAGE_1_Pin GPIO_PIN_4
#define VOLTAGE_1_GPIO_Port GPIOA
#define VOLTAGE_2_Pin GPIO_PIN_6
#define VOLTAGE_2_GPIO_Port GPIOA
#define AL_Pin GPIO_PIN_7
#define AL_GPIO_Port GPIOA
#define BL_Pin GPIO_PIN_0
#define BL_GPIO_Port GPIOB
#define CL_Pin GPIO_PIN_1
#define CL_GPIO_Port GPIOB
#define AH_Pin GPIO_PIN_8
#define AH_GPIO_Port GPIOA
#define BH_Pin GPIO_PIN_9
#define BH_GPIO_Port GPIOA
#define CH_Pin GPIO_PIN_10
#define CH_GPIO_Port GPIOA
#define BREAK_UNIT_Pin GPIO_PIN_11
#define BREAK_UNIT_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
