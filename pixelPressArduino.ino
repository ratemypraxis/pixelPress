#include <FastLED.h>
#include <Bounce2.h>

// Define the number of LEDs in the strip and the data pin
#define NUM_LEDS 125
#define DATA_PIN 2

int button1Pin = 3;
int button2Pin = 4;
int button3Pin = 5;
int button4Pin = 6;
int button5Pin = 7;
int button6Pin = 8;
// int button7Pin = 9;
// int button8Pin = 10;
// int button9Pin = 11;
// int button10Pin = 12;
// int button11Pin = 13;
// int button12Pin = 14;
// int button13Pin = 15;
// int button14Pin = 16;
// int button15Pin = 17;
// int button16Pin = 19;

int button1Press = 0;
int button2Press = 0;
int button3Press = 0;
int button4Press = 0;
int button5Press = 0;
int button6Press = 0;
// int button7Press = 0;
// int button8Press = 0;
// int button9Press = 0;
// int button10Press = 0;
// int button11Press = 0;
// int button12Press = 0;
// int button13Press = 0;
// int button14Press = 0;
// int button15Press = 0;
// int button16Press = 0;


unsigned long lastDebounceTime = 0;  // the last time the output pin was toggled
unsigned long debounceDelay = 50;    // the debounce time; increase if the output flickers


// Create a CRGB array to store the colors of the LEDs
CRGB leds[NUM_LEDS];


int h = 0;
int s = 0;
int v = 0;


Bounce bouncer1 = Bounce(button1Pin, 20);
Bounce bouncer2 = Bounce(button2Pin, 20);
Bounce bouncer3 = Bounce(button3Pin, 20);
Bounce bouncer4 = Bounce(button4Pin, 20);
Bounce bouncer5 = Bounce(button5Pin, 20);
Bounce bouncer6 = Bounce(button6Pin, 20);
// Bounce bouncer7 = Bounce(button7Pin, 20);
// Bounce bouncer8 = Bounce(button8Pin, 20);
// Bounce bouncer9 = Bounce(button9Pin, 20);
// Bounce bouncer10 = Bounce(button10Pin, 20);
// Bounce bouncer11 = Bounce(button11Pin, 20);
// Bounce bouncer12 = Bounce(button12Pin, 20);
// Bounce bouncer13 = Bounce(button13Pin, 20);
// Bounce bouncer14 = Bounce(button14Pin, 20);
// Bounce bouncer15 = Bounce(button15Pin, 20);
// Bounce bouncer16 = Bounce(button16Pin, 20);

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
    //   for (int i = 0; i < NUM_LEDS; i++) {
    //   leds[i] = CHSV(h, s, v);
    //   FastLED.clear();
    //   delay(10);
    // }
}


void loop() {

int h = 0;
int s = 0;
int v = 0;

  // 0,0 -- button1
  if (bouncer1.update() && bouncer1.read() == HIGH) {

    if (button1Press == 0) {
      h = 0;
      s = 255;
      v = 255;
      Serial.println("red1");
      button1Press++;
    } else if (button1Press == 1) {
      h = 100;
      s = 255;
      v = 255;
      button1Press++;
      Serial.println("green1");
    } else if (button1Press == 2) {
      h = 160;
      s = 255;
      v = 255;
      button1Press++;
      Serial.println("blue1");
    } else if (button1Press == 3) {
      h = 0;
      s = 0;
      v = 0;
      Serial.println("off1");
      button1Press++;
    } else if (button1Press == 4) {
      h = 0;
      s = 0;
      v = 255;
      Serial.println("white1");
      button1Press = 0;
    } else{
      h = 0;
      s = 0;
      v = 0;    }
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
      Serial.println("red2");
      button2Press++;
    } else if (button2Press == 1) {
      h = 100;
      s = 255;
      v = 255;
      button2Press++;
      Serial.println("green2");
    } else if (button2Press == 2) {
      h = 160;
      s = 255;
      v = 255;
      button2Press++;
      Serial.println("blue2");
    } else if (button2Press == 3) {
      h = 0;
      s = 0;
      v = 0;
      Serial.println("off2");
      button2Press++;
    } else if (button2Press == 4) {
      h = 0;
      s = 0;
      v = 255;
      Serial.println("white2");
      button2Press = 0;
    }else{
      h = 0;
      s = 0;
      v = 0;    }
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

    // 0,2 -- button3
  if (bouncer3.update() && bouncer3.read() == HIGH) {

    if (button3Press == 0) {
      h = 0;
      s = 255;
      v = 255;
      Serial.println("red3");
      button3Press++;
    } else if (button3Press == 1) {
      h = 100;
      s = 255;
      v = 255;
      button3Press++;
      Serial.println("green3");
    } else if (button3Press == 2) {
      h = 160;
      s = 255;
      v = 255;
      button3Press++;
      Serial.println("blue3");
    } else if (button3Press == 3) {
      h = 0;
      s = 0;
      v = 0;
      Serial.println("off3");
      button3Press++;
    } else if (button3Press == 4) {
      h = 0;
      s = 0;
      v = 255;
      Serial.println("white3");
      button3Press = 0;
    }else{
      h = 0;
      s = 0;
      v = 0;    }
    for (int i = 12; i <= 17; i++) {
      leds[i] = CHSV(h, s, v);
      FastLED.show();
      delay(10);
    }
    for (int i = 29; i <= 34; i++) {
      leds[i] = CHSV(h, s, v);
      FastLED.show();
      delay(10);
    }
  }

    // 0,3 -- button4
  if (bouncer4.update() && bouncer4.read() == HIGH) {

    if (button4Press == 0) {
      h = 0;
      s = 255;
      v = 255;
      Serial.println("red4");
      button4Press++;
    } else if (button4Press == 1) {
      h = 100;
      s = 255;
      v = 255;
      button4Press++;
      Serial.println("green4");
    } else if (button4Press == 2) {
      h = 160;
      s = 255;
      v = 255;
      button4Press++;
      Serial.println("blue4");
    } else if (button4Press == 3) {
      h = 0;
      s = 0;
      v = 0;
      Serial.println("off4");
      button4Press++;
    } else if (button4Press == 4) {
      h = 0;
      s = 0;
      v = 255;
      Serial.println("whit4e");
      button4Press = 0;
    }else{
      h = 0;
      s = 0;
      v = 0;    }
    for (int i = 18; i <= 27; i++) {
      leds[i] = CHSV(h, s, v);
      FastLED.show();
      delay(10);
    }
  }

    // 1,0 -- button5
  if (bouncer5.update() && bouncer5.read() == HIGH) {

    if (button5Press == 0) {
      h = 0;
      s = 255;
      v = 255;
      Serial.println("red5");
      button5Press++;
    } else if (button5Press == 1) {
      h = 100;
      s = 255;
      v = 255;
      button5Press++;
      Serial.println("green5");
    } else if (button5Press == 2) {
      h = 160;
      s = 255;
      v = 255;
      button5Press++;
      Serial.println("blue5");
    } else if (button5Press == 3) {
      h = 0;
      s = 0;
      v = 0;
      Serial.println("off5");
      button5Press++;
    } else if (button5Press == 4) {
      h = 0;
      s = 0;
      v = 255;
      Serial.println("white5");
      button5Press = 0;
    }else{
      h = 0;
      s = 0;
      v = 0;    }
    for (int i = 47; i <= 51; i++) {
      leds[i] = CHSV(h, s, v);
      FastLED.show();
      delay(10);
    }
    for (int i = 90; i <= 94; i++) {
      leds[i] = CHSV(h, s, v);
      FastLED.show();
      delay(10);
    }
  }

  // FastLED.clear();
}
