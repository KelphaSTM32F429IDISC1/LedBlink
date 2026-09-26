#include "main.h"
#include "main_cpp.h"
#include "cmsis_os.h"
#include "stm32f4xx_hal_gpio.h"

void main_cpp(void)
{
    while(1)
    {
        HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
        osDelay(200);
    }
}