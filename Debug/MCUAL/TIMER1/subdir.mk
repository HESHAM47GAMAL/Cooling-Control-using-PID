################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCUAL/TIMER1/TIMER1.c 

OBJS += \
./MCUAL/TIMER1/TIMER1.o 

C_DEPS += \
./MCUAL/TIMER1/TIMER1.d 


# Each subdirectory must supply rules for building sources it contributes
MCUAL/TIMER1/%.o: ../MCUAL/TIMER1/%.c MCUAL/TIMER1/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


