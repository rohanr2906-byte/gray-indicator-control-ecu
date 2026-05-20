// Automotive Indicator Control ECU Demo
// Board: Arduino Uno

const int leftButton = 2;
const int rightButton = 3;
const int hazardButton = 4;

const int leftLed = 8;
const int rightLed = 9;

unsigned long previousMillis = 0;
const long blinkInterval = 500;

bool ledState = false;

void setup() {
  pinMode(leftButton, INPUT_PULLUP);
  pinMode(rightButton, INPUT_PULLUP);
  pinMode(hazardButton, INPUT_PULLUP);

  pinMode(leftLed, OUTPUT);
  pinMode(rightLed, OUTPUT);

  Serial.begin(9600);
  Serial.println("Indicator Control ECU Started");
}

void loop() {
  bool leftPressed = digitalRead(leftButton) == LOW;
  bool rightPressed = digitalRead(rightButton) == LOW;
  bool hazardPressed = digitalRead(hazardButton) == LOW;

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= blinkInterval) {
    previousMillis = currentMillis;
    ledState = !ledState;
  }

  if (hazardPressed) {
    digitalWrite(leftLed, ledState);
    digitalWrite(rightLed, ledState);
    Serial.println("Hazard mode active");
  }
  else if (leftPressed) {
    digitalWrite(leftLed, ledState);
    digitalWrite(rightLed, LOW);
    Serial.println("Left indicator active");
  }
  else if (rightPressed) {
    digitalWrite(leftLed, LOW);
    digitalWrite(rightLed, ledState);
    Serial.println("Right indicator active");
  }
  else {
    digitalWrite(leftLed, LOW);
    digitalWrite(rightLed, LOW);
    Serial.println("Indicator off");
  }

  delay(100);
}