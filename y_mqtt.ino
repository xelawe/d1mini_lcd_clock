time_t payload_to_time_t( byte* payload, unsigned int length) {
  time_t lv_time_t = 0;

  for (int i = 0; i < length; i++) {
    DebugPrint((char)payload[i]);
  }
  DebugPrintln("");

  for (int i = 0; i < length; i++) {

    lv_time_t = (lv_time_t * 10) + payload[i] - 48;

  }

  DebugPrintln(lv_time_t);

  return lv_time_t;
}

void callback_mqtt_time(char* topic, byte* payload, unsigned int length) {
  DebugPrintln("Callback time");

  gv_timestamp_mqtt = payload_to_time_t( payload, length);
  gv_timestamp_mqtt_ok = true;

}

void init_mqtt_local() {

  
  init_mqtt(gv_clientname);

  add_subtopic(mqtt_subtopic_timestamp, callback_mqtt_time);
}

