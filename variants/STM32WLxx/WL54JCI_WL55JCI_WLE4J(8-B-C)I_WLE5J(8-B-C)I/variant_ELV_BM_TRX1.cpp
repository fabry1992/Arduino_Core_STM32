/*
 *******************************************************************************
 * Copyright (c) 2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#if defined(ARDUINO_ELV_BM_TRX1)
#include "pins_arduino.h"
// Digital PinName array
const PinName digitalPin[] = {
  PA_0,   // D0
  PA_1,   // D1
  PA_2,   // D2
  PA_3,   // D3
  PA_4,   // D4
  PA_5,   // D5
  PA_6,   // D6
  PA_7,   // D7
  PA_8,   // D8
  PA_9,   // D9
  PA_10,  // D10/A0
  PA_11,  // D11/A1
  PA_12,  // D12/A2
  PA_13,  // D13/A3
  PA_14,  // D14/A4
  PA_15,  // D15/A5
  PB_0,   // D16
  PB_1,   // D17/A6
  PB_2,   // D18/A7
  PB_3,   // D19/A8
  PB_4,   // D20/A9
  PB_5,   // D21
  PB_6,   // D22
  PB_7,   // D23
  PB_8,   // D24
  PB_9,   // D25
  PB_10,  // D26
  PB_11,  // D27
  PB_12,  // D28
  PB_13,  // D29/A10
  PB_14,  // D30/A11
  PB_15,  // D31
  PC_0,   // D32
  PC_1,   // D33
  PC_2,   // D34
  PC_3,   // D35
  PC_4,   // D36
  PC_5,   // D37
  PC_6,   // D38
  PC_13,  // D39
  PC_14,  // D40
  PC_15,  // D41
  PH_3    // D42
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  10, // A0,  PA10
  11, // A1,  PA11
  12, // A2,  PA12
  13, // A3,  PA13
  14, // A4,  PA14
  15, // A5,  PA15
  17, // A6,  PB1
  18, // A7,  PB2
  19, // A8,  PB3
  20, // A9,  PB4
  29, // A10, PB13
  30  // A11, PB14
};

// ----------------------------------------------------------------------------
#ifdef __cplusplus
extern "C" {
#endif


// /**
// * Initialize the variant. Note that this runs After
// * the lib initializers - if they use an interrupt, they'll fail.
// * Consider moving this to a call before the premains.
// */
// void initVariant()
// {
// SCB->VTOR = 0x08000000;
// }

// /**
// * @brief  System Clock Configuration
// * @param  None
// * @retval None
// */
// WEAK void SystemClock_Config(void)
// {
// HAL_StatusTypeDef hal_state = HAL_OK;
// RCC_OscInitTypeDef RCC_OscInitStruct = {0};
// RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
// pinMode(PB3, OUTPUT);
// pinMode(PA15, OUTPUT);
// /** Configure LSE Drive Capability */
// // HAL_PWR_EnableBkUpAccess();
// __HAL_RCC_LSEDRIVE_CONFIG(RCC_LSEDRIVE_LOW);
// /** Configure the main internal regulator output voltage
// */
// digitalWrite(PB3, 1);
// digitalWrite(PA15, 0);
// __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
// /** Initializes the CPU, AHB and APB busses clocks
// */
// /** Initializes the CPU, AHB and APB busses clocks */
// RCC_OscInitStruct.OscillatorType  = RCC_OSCILLATORTYPE_HSE|RCC_OSCILLATORTYPE_LSE;
// RCC_OscInitStruct.HSEState        = RCC_HSE_ON;
// RCC_OscInitStruct.LSEState        = RCC_LSE_ON;
// RCC_OscInitStruct.HSEDiv          = RCC_HSE_DIV1;
// RCC_OscInitStruct.PLL.PLLState    = RCC_PLL_ON;
// RCC_OscInitStruct.PLL.PLLSource   = RCC_PLLSOURCE_HSE;
// RCC_OscInitStruct.PLL.PLLM        = RCC_PLLM_DIV4;
// RCC_OscInitStruct.PLL.PLLN        = 12;
// RCC_OscInitStruct.PLL.PLLP        = RCC_PLLP_DIV2;
// RCC_OscInitStruct.PLL.PLLR        = RCC_PLLR_DIV2;
// RCC_OscInitStruct.PLL.PLLQ        = RCC_PLLQ_DIV2;

// // do
// // {
// hal_state = HAL_RCC_OscConfig( &RCC_OscInitStruct );
// // }
// // while( hal_state == HAL_TIMEOUT );
// if( hal_state != HAL_OK )
// {
// Error_Handler();
// }

// /** Configure the SYSCLKSource, HCLK, PCLK1 and PCLK2 clocks dividers
// */
// RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK3 | RCC_CLOCKTYPE_HCLK
// | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1
// | RCC_CLOCKTYPE_PCLK2;
// RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
// RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
// RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
// RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
// RCC_ClkInitStruct.AHBCLK3Divider = RCC_SYSCLK_DIV1;
// digitalWrite(PB3, 0);
// digitalWrite(PA15, 1);
// // do
// // {
// hal_state = HAL_RCC_ClockConfig( &RCC_ClkInitStruct, FLASH_LATENCY_2 );
// // }
// // while( hal_state == HAL_TIMEOUT );
// // if( hal_state != HAL_OK )
// // {
// // Error_Handler();
// // }
// digitalWrite(PB3, 1);
// digitalWrite(PA15, 1);
// }

/*
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
 */
WEAK void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};
  /* Configure the main internal regulator output voltage*/

  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);
  /* Initializes the CPU, AHB and APB busses clocks*/

  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_MSI;
  RCC_OscInitStruct.MSIState = RCC_MSI_ON;
  RCC_OscInitStruct.MSICalibrationValue = RCC_MSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.MSIClockRange = RCC_MSIRANGE_11;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    Error_Handler();
  }
  /* Configure the SYSCLKSource, HCLK, PCLK1 and PCLK2 clocks dividers*/

  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK3 | RCC_CLOCKTYPE_HCLK
                                | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1
                                | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_MSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.AHBCLK3Divider = RCC_SYSCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK) {
    Error_Handler();
  }
}
#ifdef __cplusplus
}
#endif
#endif /* ARDUINO_ELV_BM_TRX1 */
