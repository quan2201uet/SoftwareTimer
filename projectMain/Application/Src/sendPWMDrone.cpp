#include <sendPWMDrone.h>

SemaphoreHandle_t PWMMotorDroneSemHandle;
TaskHandle_t PWMMotorDroneTaskHandle;


//void startPWMMotorDroneTask(void* parameters)
//{
//
//	for(;;)
//	{
//
//		xSemaphoreTake(PWMMotorDroneSemHandle, portMAX_DELAY);
//
//	}
//}


class startPWMMotorDroneTask
{
private:
public:
	void startTask()
	{
		void changeDrone();
		void changeRover();
		for(;;)
		{
			if(true)
			{
				changeDrone();
			}
			else
			{
				changeRover();
			}
		}

	}

};
