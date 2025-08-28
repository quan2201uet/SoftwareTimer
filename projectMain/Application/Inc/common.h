#ifndef INC_COMMON_H_
#define INC_COMMON_H_
#include <main.h>

enum state {
	modeIde = 0,
	modeDrone = 1,
	modeRover = 2,
	modeTranform = 3,
};

extern enum state status;


#endif /* INC_COMMON_H_ */
