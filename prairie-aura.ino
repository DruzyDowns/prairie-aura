#include <Adafruit_NeoPixel.h>

#define PIN 6

// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(40, PIN, NEO_GRBW + NEO_KHZ800);

void setup()
  {
    Serial.begin(9600);
    strip.begin();
    strip.show();
    strip.setBrightness(50);
}


void loop() {


  stripe(25);
  strip.clear();
  warm(25);
  strip.clear();
  cool(25);
  strip.clear();
  rose(25);
  strip.clear();
  yellow(25);
}



void warm(uint8_t wait) {
  uint16_t i ;
  int x = 1;
  int y = -1;
  for (int i = 0, j = 200; (i > -1) && (j > -1); i = i + x, j = j + y) {

  strip.setPixelColor(38, 255, 0, 0, 0);
  strip.setPixelColor(37, 255, 0, 0, 0);
  strip.setPixelColor(36, 255, 0, 0, 0);
  strip.setPixelColor(35, i, 0, 0, 0);
  strip.setPixelColor(31, j, 0, j, 0);
  strip.setPixelColor(30, i, i, 0, 0);
  strip.setPixelColor(29, 255, i, 0, 0);
  strip.setPixelColor(28, i, i, 0, 0);
  strip.setPixelColor(23, i, 0, i, 0);
  strip.setPixelColor(21, i, i, 0, 0);
  strip.setPixelColor(12, i, j, 50, 0);
  strip.setPixelColor(11, i, j, 50, 0);

    if ((i == 200) && (j == 0)) {
      x = -1;  // switch direction at peak
      y = 1;
    }

    strip.show();
    delay(wait);
  }

}

void cool(uint8_t wait) {
  uint16_t i ;
  int x = 1;
  int y = -1;
  for (int i = 0, j = 200; (i > -1) && (j > -1); i = i + x, j = j + y) {

  strip.setPixelColor(37, i, i, j, 0);
  strip.setPixelColor(36, i, i, j, 0);
  strip.setPixelColor(29, j, i, 255, 0);
  strip.setPixelColor(28, 0, i, 0, 0);
  strip.setPixelColor(27, 100, 0, 255, 0);
  strip.setPixelColor(21, i, i, j, 0);
  strip.setPixelColor(20, 0, i, j, 0);
  strip.setPixelColor(20, 0, i, j, 0);
  strip.setPixelColor(13, 0, i, j, 0);
  strip.setPixelColor(12, 0, i, j, 0);
  strip.setPixelColor(10, j, j, i, 0);


    if ((i == 200) && (j == 0)) {
      x = -1;  // switch direction at peak
      y = 1;
    }

    strip.show();
    delay(wait);
  }

}

void stripe(uint8_t wait) {
  uint16_t i ;
  int x = 1;
  int y = -1;
  for (int i = 0, j = 200; (i > -1) && (j > -1); i = i + x, j = j + y) {

  strip.setPixelColor(37, 0, 0, 255, 0);
  strip.setPixelColor(36, 0, 0, 255, 0);
  strip.setPixelColor(35, 0, 0, 255, 0);
  strip.setPixelColor(30, 255, 0, 0, 0);
  strip.setPixelColor(29, 255, i, 0, 0);
  strip.setPixelColor(28, 255, i, 0, 0);
  strip.setPixelColor(27, 255, i, 0, 0);
  strip.setPixelColor(22, j, i, j, 0);
  strip.setPixelColor(21, j, 0, 255, 0);
  strip.setPixelColor(20, j, i, j, 0);
  strip.setPixelColor(13, 0, 255, 0, 0);
  strip.setPixelColor(12, 0, 255, 0, 0);
  strip.setPixelColor(11, 0, 255, 0, 0);



    if ((i == 200) && (j == 0)) {
      x = -1;  // switch direction at peak
      y = 1;
    }

    strip.show();
    delay(wait);
  }

}

void rose(uint8_t wait) {
  uint16_t i ;
  int x = 1;
  int y = -1;
  for (int i = 0, j = 200; (i > -1) && (j > -1); i = i + x, j = j + y) {

  strip.setPixelColor(37, j, 50, 50, 0);
  strip.setPixelColor(36, j, 25, 25, 0);
  strip.setPixelColor(35, j, 25, 25, 0);
  strip.setPixelColor(34, j, i, 0, 0);
  strip.setPixelColor(29, 0, 0, 0, 0);
  strip.setPixelColor(28, 255, 50, 50, 0);
  strip.setPixelColor(27, 0, 0, 0, 0);
  strip.setPixelColor(21, 0, 0, 0, 0);
  strip.setPixelColor(20, 0, 0, j, 0);
  strip.setPixelColor(19, 0, 0, 0, 0);
  strip.setPixelColor(13, i, 0, 0, 0);
  strip.setPixelColor(12, 0, 0, j, 0);
  strip.setPixelColor(11, 0, j, 0, 0);



    if ((i == 200) && (j == 0)) {
      x = -1;  // switch direction at peak
      y = 1;
    }

    strip.show();
    delay(wait);
  }

}

void yellow(uint8_t wait) {
  uint16_t i ;
  int x = 1;
  int y = -1;
  for (int i = 0, j = 200; (i > -1) && (j > -1); i = i + x, j = j + y) {

  strip.setPixelColor(38, 255, j, 0, 0);
  strip.setPixelColor(37, 200, j, 0, 0);
  strip.setPixelColor(36, 255, j, 0, 0);
  strip.setPixelColor(30, j, 255, 0, 0);
  strip.setPixelColor(29, 0, j, 0, 0);
  strip.setPixelColor(28, 200, 255, 0, 0);
  strip.setPixelColor(21, j, 255, 0, 0);
  strip.setPixelColor(20, j, 0, 0, 0);
  strip.setPixelColor(13, j, 255, 0, 0);





    if ((i == 200) && (j == 0)) {
      x = -1;  // switch direction at peak
      y = 1;
    }

    strip.show();
    delay(wait);
  }

}
