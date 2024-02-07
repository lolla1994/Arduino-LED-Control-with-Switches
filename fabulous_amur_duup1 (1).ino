int switchPin1 = 2;
int switchPin2 = 3;
int ledPins[] = {4, 5, 6, 7, 8, 9};

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(switchPin1, INPUT_PULLUP);
  pinMode(switchPin2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(switchPin1) == LOW) {
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
  } else {
    for (int i = 0; i < 3; i++) {
      digitalWrite(ledPins[i], LOW);
    }
  }

  if (digitalRead(switchPin2) == LOW) {
    for (int i = 3; i < 6; i++) {
      digitalWrite(ledPins[i], HIGH);
    }
  } else {
    for (int i = 3; i < 6; i++) {
      digitalWrite(ledPins[i], LOW);
    }
  }
}