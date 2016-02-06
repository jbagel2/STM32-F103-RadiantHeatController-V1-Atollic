/*
 * nodefirm.c
 *
 *  Created on: Feb 6, 2016
 *      Author: Jacob
 */

#include "nodefirm.h"


const char *AppFunctionsArray[3] = {
		"StartRestService(", // )
		"SetNodeStatus(", // pump, valve, lineTemp1, lineTemp2)
		"SaveNewTempHumid(" // temp, humid)
};

const char *NodeCommandsArray[8] = {
		"Ping()",
		"wifi.sta.getap(listap)",
		"=node.info()",
		"=wifi.getmode()",
		"node.restart()",
		"StartRestService(80)",
		"=node.info()",
		"wifi.sta.disconnect()"
};


void SaveTempHumid(float temp, float humid)
{
	//TODO: Call ESPCommand Array to send data
}

void SaveNodeStatus(uint16_t pump, uint16_t valve, float lineTemp1, float lineTemp2)
{
	//TODO: Call ESPCommand Array to send data
}
