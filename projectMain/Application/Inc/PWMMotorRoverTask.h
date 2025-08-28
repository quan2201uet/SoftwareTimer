#ifndef __PWMMOTORROVERTASK_H
#define __PWMMOTORROVERTASK_H

#include "cmsis_os.h"
#include "main.h"

extern SemaphoreHandle_t PWMMotorRoverSemHandle;
extern TaskHandle_t PWMMotorRoverTaskHandle;

void startPWMMotorRoverTask(void* parameters);
#endif
