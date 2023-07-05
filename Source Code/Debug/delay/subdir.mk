################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../delay/dwt_stm32_delay.c 

OBJS += \
./delay/dwt_stm32_delay.o 

C_DEPS += \
./delay/dwt_stm32_delay.d 


# Each subdirectory must supply rules for building sources it contributes
delay/%.o delay/%.su delay/%.cyclo: ../delay/%.c delay/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DUSE_HAL_DRIVER -DSTM32F103xB -DDEBUG -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"E:/Motor/STEP_MOTOR_L297_L6201PS/delay" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-delay

clean-delay:
	-$(RM) ./delay/dwt_stm32_delay.cyclo ./delay/dwt_stm32_delay.d ./delay/dwt_stm32_delay.o ./delay/dwt_stm32_delay.su

.PHONY: clean-delay

