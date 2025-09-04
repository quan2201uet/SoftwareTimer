#ifndef __PWMMOTORROVERTASK_H
#define __PWMMOTORROVERTASK_H

#include "cmsis_os.h"
#include "main.h"
#include "common.h"

extern SemaphoreHandle_t PWMMotorRoverSemHandle;
extern TaskHandle_t PWMMotorRoverTaskHandle;
extern motor roverGlobal;

void startPWMMotorRoverTask(void* parameters);
#endif
