
void setup()
{
  cy_serial::start(__FILE__);

  init_lcd();
  lcd.print("\n\n" + String(__DATE__) + ", " + String(__TIME__) + " " + String(gv_file) + "\n");
  lcd.setCursor ( 0, 3 );        // go to the next line

  lcd.print("Wifi ... ");
  wifi_init(gc_hostname);
  lcd.print("conn!");

  init_ota(gv_clientname);

  init_ds1820() ;

  init_mqtt_local();
}

void loop()
{
  check_ota();

  check_mqtt_reset();



  if (gv_timestamp_mqtt_ok) {
    check_1820();
    lcd_temp(gv_tempC);
    delay(10000);
    lcd_time(myTZ.toLocal(gv_timestamp_mqtt, &tcr));
    gv_timestamp_mqtt_ok = false;
  }

  delay (200);
}
