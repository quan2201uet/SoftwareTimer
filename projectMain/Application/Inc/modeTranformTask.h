
#ifndef INC_MODETRANFORMTASK_H_
#define INC_MODETRANFORMTASK_H_

#include "cmsis_os.h"
#include "main.h"

extern SemaphoreHandle_t modeTranformSemHandle;
extern TaskHandle_t 	 modeTranformTaskHandle;

void startModeTranformTask(void* parameters);



#endif /* INC_MODETRANFORMTASK_H_ */
