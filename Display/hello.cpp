/*
 * Shows HELLO on Waveshare ESP32-S3-Touch-AMOLED-1.8
 *
 * From Cursor terminal:
 *   cd /Users/marshee/Desktop/hwTrials/Display
 *   ~/.platformio/penv/bin/pio run -e esp32s3 -t upload
 */
#include "Arduino_GFX.h"
#include <Arduino_GFX_Library.h>

Arduino_DataBus *bus = new Arduino_ESP32QSPI(12, 11, 4, 5, 6, 7);
Arduino_CO5300 *gfx = new Arduino_CO5300(bus, -1, 0, false, 368, 448);

void setup() {
  gfx->begin();
  gfx->fillScreen(GREENYELLOW);
  gfx->setBrightness(255);

  gfx->setTextColor(BLACK);
  gfx->setTextSize(10);
  gfx->setCursor(50, 180);
  gfx->print("HELLO");
}

void loop() {
}
