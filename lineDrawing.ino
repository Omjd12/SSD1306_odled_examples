#include "SPI.h"
#include "Wire.h"
#include "Adafruit_GFX.h"
#include "Adafruit_SSD1306.h"

#define OLED_RESET -1
Adafruit_SSD1306 display;


void setup() {
  // put your setup code here, to run once:
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C, OLED_RESET);
  display.clearDisplay(); //clear buffer 

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i<display.width(); i++){
    display.drawLine(0,0,i,display.height(),WHITE); // draws a line with the x,y co-ordinates
    display.display(); //
    display.clearDisplay();
  }
  display.clearDisplay();
}
