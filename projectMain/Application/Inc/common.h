#ifndef INC_COMMON_H_
#define INC_COMMON_H_
#include <main.h>
#include "cmsis_os.h"

typedef enum {
	modeIde = 0,
	modeDrone = 1,
	modeRover = 3,
	modeTranform = 2,
} state;

extern state status;


#define MAX_CHANNELS 4
#define OVERTIME 3000

// PPM truyền dữ liệu qua mail queue
typedef struct {
	uint16_t channels[MAX_CHANNELS];
	uint8_t count;
} PPM;

typedef struct {
	uint16_t motor1;
	uint16_t motor2;
	uint16_t motor3;
	uint16_t motor4;
}motor ;

extern QueueHandle_t ppmQueue;

#endif /* INC_COMMON_H_ */
