
#include "cy_mqtt_v1.h"

const char* mqtt_subtopic_timestamp = "ATSH28/DATE/timestamp";

time_t gv_timestamp_mqtt;
boolean gv_timestamp_mqtt_ok = false;
