#include "modeTranformTask.h"

SemaphoreHandle_t modeTranformSemHandle;
TaskHandle_t 	  modeTranformTaskHandle;

void modeTranformTaskTask(void* parameters)
{
	for(;;)
	{
		xSemaphoreTake(modeTranformSemHandle, portMAX_DELAY);

	}
}
