#include "PWMMotorDroneTask.h"

SemaphoreHandle_t PWMMotorDroneSemHandle;
TaskHandle_t PWMMotorDroneTaskHandle;


void startPWMMotorDroneTask(void* parameters)
{
	for(;;)
	{
		xSemaphoreTake(PWMMotorDroneSemHandle, portMAX_DELAY);

	}
}
