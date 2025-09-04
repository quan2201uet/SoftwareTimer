#ifndef __SENDPWMDRONE_H
#define __SENDPWMDRONE_H

#include "cmsis_os.h"
#include "main.h"

extern SemaphoreHandle_t PWMMotorDroneSemHandle;
extern TaskHandle_t PWMMotorDroneTaskHandle;

void startPWMMotorDroneTask(void* parameters);

#endif
