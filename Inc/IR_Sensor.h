/*
 * AUTHOR: Toyin Ayanleye
 * email: ayanleyetoyin@outlook.com
 *
 * Description: This is a library for interfacing the IR Sensor
 *
 * Functions:
 *
*/

#ifndef _IR_SENSOR_H_
#define _IR_SENSOR_H_
//code goes here
#include "stm32f1xx_hal.h" //substitute stm32fx for whatever family of stm32 being used

//IR_Sensor structure
typedef struct IR{
	uint16_t Pin;
	GPIO_TypeDef *Port;
}IR_Sens;

//API Functions
void IR_Sensor_Init(IR_Sens *);//initial setup for the sensor pin
int IR_Sensor_Get_Value(IR_Sens *);//reading current state of the IR Sensor


#endif
