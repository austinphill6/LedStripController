#include <HL1606strip.h>

#define STRIP_D 4
#define STRIP_C 3
#define STRIP_L 2

HL1606strip strip = HL1606strip(STRIP_D, STRIP_L, STRIP_C, 50);

byte incomingByte = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial) {
    if(Serial.available() > 0) {
      incomingByte = Serial.read();
      Serial.print(incomingByte, BIN);
    }
      
    if(incomingByte == '1') {
      fullColor(RED, 1000);
    }
    else if(incomingByte == '2') {
      fullColor(BLUE, 1000);
    }
    else if(incomingByte == '3') {
      fullColor(GREEN, 1000);
    }
    else if(incomingByte == '4') {
      fullColor(YELLOW, 1000);
    }
    else if(incomingByte == '5') {
      fullColor(VIOLET, 1000);
    }
    else if(incomingByte == '6') {
      fullColor(TEAL, 1000);
    }
    else if(incomingByte == '7') {
      fullColor(WHITE, 1000);
    }
    else if(incomingByte == '0') {
      fullColor(BLACK, 1000);
    }
    else {
      fullColor(WHITE, 1000);
    }
  }
}

void fullColor(uint8_t color, uint8_t wait) {
  uint8_t i;
  for(i = 0; i < strip.numLEDs(); ++i) {
    strip.setLEDcolor(i, color);
  }
  strip.writeStrip();
  delay(wait);
}
