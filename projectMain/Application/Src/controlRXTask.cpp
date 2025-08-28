#include "controlRXTask.h"

SemaphoreHandle_t controlRXSemHandle;
TaskHandle_t controlRXTaskHandle;

void startControlRXTask(void* parameters)
{
	for(;;)
	{
		xSemaphoreTake(controlRXSemHandle, portMAX_DELAY);
	}
}
