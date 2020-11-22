
#include <Wire.h>
#include <LiquidCrystal_I2C.h>


#define BACKLIGHT_PIN     13

LiquidCrystal_I2C lcd(0x20);  // Set the LCD I2C address
//LiquidCrystal_I2C lcd(0x38, BACKLIGHT_PIN, POSITIVE);  // Set the LCD I2C address

int gv_col;


