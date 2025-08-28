#ifndef __CONTROLRXTASK_H
#define __CONTROLRXTASK_H

#include "cmsis_os.h"
#include "main.h"

extern SemaphoreHandle_t controlRXSemHandle;
extern TaskHandle_t 	 controlRXTaskHandle;

void startControlRXTask(void* parameters);

#endif
