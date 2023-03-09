#include <FastLED.h>
#include <Bounce2.h>

// Define the number of LEDs in the strip and the data pin
#define NUM_LEDS 10
#define DATA_PIN 2

// Variables will change:
int buttonPin = 14;
int buttonPress = 0;


unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers


// Create a CRGB array to store the colors of the LEDs
CRGB leds[NUM_LEDS];


int h = 0;
int s = 0;
int v = 255;
int b1;
int b2;


Bounce bouncer = Bounce(buttonPin, 20);

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
}


void loop() {
 int b;
//  btnCount(h, s, v);


  // for (int i = 0; i < 2; i++) {
  //   leds[i] = CHSV(h, s, v);
  //     FastLED.show();

  // }

  // for (int i = 2; i < 4; i++) {
  //   leds[i] = CHSV(0, 0, 0);
  //     FastLED.clear();

  // }

  //   for (int i = 4; i < 8; i++) {
  //   leds[i] = CHSV(h, s, v);
  //     FastLED.show();

  // }
  // Show the updated colors on the LED strip
  //FastLED.show();

  // Delay for a short amount of time to avoid overwhelming the processor
  delay(10);


// void btnCount{
  if (bouncer.update() && bouncer.read() == HIGH) {

    if (buttonPress == 0) {
      h = 0;
      s = 255;
      v = 255;
      Serial.println("red");
      buttonPress++;



    } else if (buttonPress == 1) {
      h = 100;
      s = 255;
      v = 255;
      buttonPress++;

      Serial.println("green");

    } else if (buttonPress == 2) {

      h = 160;
      s = 255;
      v = 255;
      buttonPress++;

      Serial.println("blue");

    } else if (buttonPress == 3) {

      h = 0;
      s = 0;
      v = 0;
      Serial.println("off");
      buttonPress++;

    } else if (buttonPress == 4) {

      h = 0;
      s = 0;
      v = 255;
      Serial.println("white");
      buttonPress = 0;
    }

      for (int i = 0; i < 2; i++) {
    leds[i] = CHSV(h, s, v);
      FastLED.show();

  }

  // for (int i = 2; i < 4; i++) {
  //   leds[i] = CHSV(0, 0, 0);
  //     FastLED.clear();

  // }

    for (int i = 4; i < 8; i++) {
    leds[i] = CHSV(h, s, v);
      FastLED.show();

  
  }
}}
