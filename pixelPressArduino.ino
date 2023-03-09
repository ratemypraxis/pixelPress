#include <FastLED.h>
#include <Bounce2.h>

// Define the number of LEDs in the strip and the data pin
#define NUM_LEDS 125
#define DATA_PIN 2

int button1Pin = 3;
int button2Pin = 4;

int button1Press = 0;
int button2Press = 0;



unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers


// Create a CRGB array to store the colors of the LEDs
CRGB leds[NUM_LEDS];


int h;
int s;
int v;


Bounce bouncer1 = Bounce(button1Pin, 20);
Bounce bouncer2 = Bounce(button2Pin, 20);


void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}


void loop() {

  // 0,0 -- button1
  if (bouncer1.update() && bouncer1.read() == HIGH) {

    if (button1Press == 0) {
      h = 0;
      s = 255;
      v = 255;
      Serial.println("red");
      button1Press++;
    } else if (button1Press == 1) {
      h = 100;
      s = 255;
      v = 255;
      button1Press++;
      Serial.println("green");
    } else if (button1Press == 2) {
      h = 160;
      s = 255;
      v = 255;
      button1Press++;
      Serial.println("blue");
    } else if (button1Press == 3) {
      h = 0;
      s = 0;
      v = 0;
      Serial.println("off");
      button1Press++;
    } else if (button1Press == 4) {
      h = 0;
      s = 0;
      v = 255;
      Serial.println("white");
      button1Press = 0;
    }
    for (int i = 0; i <= 4; i++) {
      
      leds[i] = CHSV(h, s, v);
FastLED.show();
      delay(10);
    }
    for (int i = 42; i <= 46; i++) {
      leds[i] = CHSV(h, s, v);
      FastLED.show();
      delay(10);
    }
  }

  // 0,1 -- button2
  if (bouncer2.update() && bouncer2.read() == HIGH) {

    if (button2Press == 0) {
      h = 0;
      s = 255;
      v = 255;
      Serial.println("red");
      button2Press++;
    } else if (button2Press == 1) {
      h = 100;
      s = 255;
      v = 255;
      button2Press++;
      Serial.println("green");
    } else if (button2Press == 2) {
      h = 160;
      s = 255;
      v = 255;
      button2Press++;
      Serial.println("blue");
    } else if (button2Press == 3) {
      h = 0;
      s = 0;
      v = 0;
      Serial.println("off");
      button2Press++;
    } else if (button2Press == 4) {
      h = 0;
      s = 0;
      v = 255;
      Serial.println("white");
      button2Press = 0;
    }
    for (int i = 5; i <= 10; i++) {
      leds[i] = CHSV(h, s, v);
      FastLED.show();
      delay(10);
    }
    for (int i = 35; i <= 40; i++) {
      leds[i] = CHSV(h, s, v);
      FastLED.show();
      delay(10);
    }
  }

        // FastLED.clear();

}
