#include "PWMMotorRoverTask.h"

SemaphoreHandle_t PWMMotorRoverSemHandle;
TaskHandle_t PWMMotorRoverTaskHandle;


void startPWMMotorRoverTask(void* parameters)
{
	for(;;)
	{
		xSemaphoreTake(PWMMotorRoverSemHandle, portMAX_DELAY);
	}
}
