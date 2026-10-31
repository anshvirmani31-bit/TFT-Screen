#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

#define TFT_CS  17
#define TFT_DC  20
#define TFT_RST 21
#define TFT_BL  22
#define ENC_A   14
#define ENC_B   15
#define BUTTON  12
#define SLIDER  26

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

volatile int count = 0;
int shownCount = -9999;
bool lastButton = HIGH;

// Runs when encoder pin A goes RISING (one step per click)
void onTurn() {
  if (digitalRead(ENC_A) == digitalRead(ENC_B)) count--;
  else count++;
}

void setup() {
  pinMode(ENC_A, INPUT_PULLUP);
  pinMode(ENC_B, INPUT_PULLUP);
  pinMode(BUTTON, INPUT_PULLUP);
  
  // Using RISING ensures it triggers once per detent click instead of twice
  attachInterrupt(digitalPinToInterrupt(ENC_A), onTurn, RISING);

  tft.init(240, 240);
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextSize(4);
}

void loop() {
  // Adjust backlight brightness via slide potentiometer
  analogWrite(TFT_BL, analogRead(SLIDER) / 4);

  // Button press resets the counter to 0
  bool button = digitalRead(BUTTON);
  if (button == LOW && lastButton == HIGH) {
    count = 0;
  }
  lastButton = button;

  // Redraw display only when the counter changes
  int now = count;
  if (now != shownCount) {
    tft.setCursor(30, 100);
    tft.setTextColor(ST77XX_WHITE, ST77XX_BLACK);
    tft.print(now);
    tft.print("    "); // Clears trailing digits
    shownCount = now;
  }
  
  delay(10); // Debounce delay
}