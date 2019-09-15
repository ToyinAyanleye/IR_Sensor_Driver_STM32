#include "IR_Sensor.h"

void IR_Sensor_Init(IR_Sens *const Sensor, GPIO_TypeDef *const IR_Port, const uint16_t IR_Pin){
	Sensor->Port = IR_Port;
	Sensor->Pin = IR_Pin;
}

int IR_Sensor_Get_Value(const IR_Sens *const Sensor){
	int value;

	value = HAL_GPIO_ReadPin(Sensor->Port, Sensor->Pin);

	return value;
}
