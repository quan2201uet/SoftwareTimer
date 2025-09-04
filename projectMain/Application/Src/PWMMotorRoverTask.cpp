#include "PWMMotorRoverTask.h"


SemaphoreHandle_t PWMMotorRoverSemHandle;
TaskHandle_t PWMMotorRoverTaskHandle;

void startPWMMotorRoverTask(void* parameters)
{
	PPM channels;
	motor roverTask;
	for(;;)
	{
		xSemaphoreTake(PWMMotorRoverSemHandle, portMAX_DELAY);
		if (xQueueReceive(ppmQueue, &channels, 10) == pdPASS)
		{
			// tính toán cơ chế điều khiển xe
			roverTask.motor1 = 1;
			roverTask.motor2 = 2;
			// test git flow
			// gắn vào biến DMA
			roverGlobal.motor1 = roverTask.motor1;
			roverGlobal.motor2 = roverTask.motor2;
		}
	}
}
