/*
 * nodefirm.h
 *
 *  Created on: Feb 6, 2016
 *      Author: Jacob
 */

#ifndef NODEFIRM_H_
#define NODEFIRM_H_

#include "stdint.h"

typedef enum
{
	WIFI_CHECK_MODULE_CONNECTION = 0,
	WIFI_AP_LIST,
	WIFI_FIRMWARE_VERSION,
	WIFI_GET_CURRENT_MODE,
	WIFI_MODULE_RESET,
	WIFI_START_LOCAL_SERVER_PORT_80,
	WIFI_GET_CURRENT_IP,
	WIFI_QUIT_CURRENT_AP,

}ESP_Commands;


const char *AppFunctionsArray[3];
const char *NodeCommandsArray[8];

void SaveTempHumid(float temp, float humid);
void SaveNodeStatus(uint16_t pump, uint16_t valve, float lineTemp1, float lineTemp2);


#endif /* NODEFIRM_H_ */
