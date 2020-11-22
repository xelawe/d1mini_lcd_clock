#include "w_lcd.h"
#include "w_ds1820.h"

#define gv_file  __FILE__

#include <cy_serdebug.h>
#include <cy_serial.h>



const char *gc_hostname = "d1minlcdc";
#include "cy_wifi.h"
#include "cy_ota.h"
