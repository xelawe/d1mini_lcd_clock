
void init_lcd() {
  int charBitmapSize = (sizeof(charBitmap ) / sizeof (charBitmap[0]));



  // Switch on the backlight
  pinMode ( BACKLIGHT_PIN, OUTPUT );
  digitalWrite ( BACKLIGHT_PIN, HIGH );

  lcd.begin(20, 4);              // initialize the lcd

  for ( int i = 0; i < charBitmapSize; i++ )
  {
    lcd.createChar ( i, (uint8_t *)charBitmap[i] );
  }

  gv_col = 0;

  lcd.home ();                   // go home

  //  lcd.print (" FORUM - fm   ");
}

void do_lcd_char( bigdigix bd_ix) {

  int lv_ix = 0;

  for (int row = 0; row < 4; row++) {
    lcd.setCursor ( gv_col, row);

    for (int col = 0; col < bigdigits[bd_ix][0]; col++) {
      lv_ix++;
      lcd.print (char(bigdigits[bd_ix][lv_ix]));
    }
  }
  gv_col = gv_col + bigdigits[bd_ix][0];
}


void do_lcd_char(int iv_nbr) {
  //switch (iv_nbr){
  //  case 1:
  //  break;
  //}
  do_lcd_char((bigdigix)iv_nbr);
}


void do_lcd_char() {

  //switch iv_char
  lcd.clear();
  lcd.home ();
  do_lcd_char(bd_2) ;
  do_lcd_char(bd_space);
  do_lcd_char(bd_1) ;
  do_lcd_char(bd_dp);
  do_lcd_char(bd_dp);
  do_lcd_char(bd_3) ;
  do_lcd_char(bd_space);
  do_lcd_char(bd_5) ;
}


void do_lcd_random() {
  lcd.home ();
  // Do a little animation by writing to the same location
  for ( int i = 0; i < 4; i++ )
  {
    lcd.setCursor ( 0, i);
    lcd.print(i);
    for ( int j = 0; j < 19; j++ )
    {

      lcd.print (char(random(7)));
    }

  }
}

void lcd_time(time_t iv_time) {

  lcd.clear();
  //lcd.home ();
  gv_col = 0;

  int lv_hour = hour(iv_time);
  int lv_hour_ten = lv_hour / 10;
  if (lv_hour > 9) {
    do_lcd_char(lv_hour_ten);
  } else {
    do_lcd_char(bd_space);
    do_lcd_char(bd_space);
    do_lcd_char(bd_space);
    do_lcd_char(bd_space);
  }
  do_lcd_char(bd_space);

  int lv_hour_one = lv_hour - (lv_hour_ten * 10);
  do_lcd_char(lv_hour_one);


  do_lcd_char(bd_dp);
  do_lcd_char(bd_dp);

  int lv_min = minute(iv_time);
  int lv_min_ten = lv_min / 10;
  do_lcd_char(lv_min_ten);
  do_lcd_char(bd_space);

  int lv_min_one = lv_min - (lv_min_ten * 10);
  do_lcd_char(lv_min_one);

}

void lcd_temp(float iv_temp) {
  lcd.clear();
  //lcd.home ();
  gv_col = 0;

  int lv_temp_ten = iv_temp / 10;
  do_lcd_char(lv_temp_ten);
  do_lcd_char(bd_space);

  int lv_temp_one = iv_temp - (lv_temp_ten * 10);
  do_lcd_char(lv_temp_one);

  do_lcd_char(bd_dezp);
  int lv_temp_dec = (iv_temp - (lv_temp_ten * 10) - lv_temp_one) * 10;
  do_lcd_char(lv_temp_dec);
  do_lcd_char(bd_space);
  do_lcd_char(bd_deg);
  do_lcd_char(bd_c);
}

