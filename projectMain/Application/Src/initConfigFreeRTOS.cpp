#include "initConfigFreeRTOS.h"

void init_Scheduler(void)
{
	xTaskCreate(startControlRXTask, "task recevie RX", 200, (void*)"NULL", 2, &controlRXTaskHandle);
	xTaskCreate(startPWMMotorDroneTask, "pwm drone", 200,  (void*)"NULL", 2, &PWMMotorDroneTaskHandle);
	xTaskCreate(startPWMMotorRoverTask, "pwm rover", 200,  (void*)"NULL", 2, &PWMMotorRoverTaskHandle);

	controlRXSemHandle = xSemaphoreCreateBinary();
	PWMMotorDroneSemHandle = xSemaphoreCreateBinary();
	PWMMotorRoverSemHandle = xSemaphoreCreateBinary();

}
