#define LED1 5
#define LED2 4
#define LED3 3
#define LED4 2
#define MAX_NUM_OF_LEDS 4

int ledArray[MAX_NUM_OF_LEDS];

void setup() {
  initPin();
  initGame();
}

void loop() {
  for(int i = 0; i < MAX_NUM_OF_LEDS; i++) {
    blinkLed(ledArray[i]);
  }
}


/*---------- Functions ----------*/
void initPin() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void initGame() {
  ledArray[0] = LED1;
  ledArray[1] = LED2;
  ledArray[2] = LED3;
  ledArray[3] = LED4;
}

void blinkSequence1() {
  blinkLed(LED1);
  blinkLed(LED2);
  blinkLed(LED3);
  blinkLed(LED4);
}

void blinkAll() {
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  delay(1000);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  delay(1000);
}

void blinkLed(int led) {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}