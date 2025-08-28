################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (13.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Application/Src/PWMMotorDroneTask.cpp \
../Application/Src/PWMMotorRoverTask.cpp \
../Application/Src/common.cpp \
../Application/Src/controlRXTask.cpp \
../Application/Src/initConfigFreeRTOS.cpp \
../Application/Src/modeTranform.cpp 

OBJS += \
./Application/Src/PWMMotorDroneTask.o \
./Application/Src/PWMMotorRoverTask.o \
./Application/Src/common.o \
./Application/Src/controlRXTask.o \
./Application/Src/initConfigFreeRTOS.o \
./Application/Src/modeTranform.o 

CPP_DEPS += \
./Application/Src/PWMMotorDroneTask.d \
./Application/Src/PWMMotorRoverTask.d \
./Application/Src/common.d \
./Application/Src/controlRXTask.d \
./Application/Src/initConfigFreeRTOS.d \
./Application/Src/modeTranform.d 


# Each subdirectory must supply rules for building sources it contributes
Application/Src/%.o Application/Src/%.su Application/Src/%.cyclo: ../Application/Src/%.cpp Application/Src/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m3 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I"C:/Users/HongQuan/Documents/NCKH/projectMain/Application/Inc" -I"C:/Users/HongQuan/Documents/NCKH/projectMain/Application" -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I../Middlewares/Third_Party/FreeRTOS/Source/include -I../Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM3 -I../Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Application-2f-Src

clean-Application-2f-Src:
	-$(RM) ./Application/Src/PWMMotorDroneTask.cyclo ./Application/Src/PWMMotorDroneTask.d ./Application/Src/PWMMotorDroneTask.o ./Application/Src/PWMMotorDroneTask.su ./Application/Src/PWMMotorRoverTask.cyclo ./Application/Src/PWMMotorRoverTask.d ./Application/Src/PWMMotorRoverTask.o ./Application/Src/PWMMotorRoverTask.su ./Application/Src/common.cyclo ./Application/Src/common.d ./Application/Src/common.o ./Application/Src/common.su ./Application/Src/controlRXTask.cyclo ./Application/Src/controlRXTask.d ./Application/Src/controlRXTask.o ./Application/Src/controlRXTask.su ./Application/Src/initConfigFreeRTOS.cyclo ./Application/Src/initConfigFreeRTOS.d ./Application/Src/initConfigFreeRTOS.o ./Application/Src/initConfigFreeRTOS.su ./Application/Src/modeTranform.cyclo ./Application/Src/modeTranform.d ./Application/Src/modeTranform.o ./Application/Src/modeTranform.su

.PHONY: clean-Application-2f-Src

