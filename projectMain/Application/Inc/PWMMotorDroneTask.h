#ifndef __PWMMOTORDRONETASK_H
#define __PWMMOTORDRONETASK_H

#include "cmsis_os.h"
#include "main.h"

extern SemaphoreHandle_t PWMMotorDroneSemHandle;
extern TaskHandle_t PWMMotorDroneTaskHandle;

void startPWMMotorDroneTask(void* parameters);

#endif
