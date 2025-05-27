/* in this example we have used adafruit's GFX and SSD1306 library 
here drawLine function uses the co-ordinates of the end points of the line and color in the integer type */

#include "SPI.h" // used for displays with spi interface
#include "Wire.h" // usef fot i2c interface 
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
  display.drawLine(0,0,display.width(),display.height(),WHITE);
  display.display();
  delay(2000);
  display.clearDisplay();
  for(int i = 0; i<display.width(); i++){
    display.drawLine(0,0,i,display.height(),WHITE); // draws a line with the x,y co-ordinates
    display.display(); // displays the line
    display.clearDisplay();
  }
  display.clearDisplay();
}
