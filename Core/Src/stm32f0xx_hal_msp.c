#include "stm32f0xx_hal.h"

void HAL_MspInit(void)
{
 //Here will do low level processor specific inits

	//1. Set up yhe priority grouping pf the arm cortex mx processor

	//2. Enable the required system exceptions of the arm cortex mx processor

	//3. Configure the priority for the system exceptions
	HAL_NVIC_SetPriority(HardFault_IRQn,0,0);

}


void HAL_TIM_Base_MspInit(TIM_HandleTypeDef *htimer)
{
	//1. Enable the clock for TIM6
	__HAL_RCC_TIM6_CLK_ENABLE();

	//2. Enable the IRQ of TIM6
	HAL_NVIC_EnableIRQ(TIM6_DAC_IRQn);

	//3. SET priority
	HAL_NVIC_SetPriority(TIM6_DAC_IRQn, 0, 0);
}
