int startValue = 5;

int ledPin = 13;

void flashLED(int times) {
  for (int i = 0; i < times; i++) {
 digitalWrite(ledPin, HIGH);
    delay(200);
 digitalWrite(ledPin, LOW);

    delay(200);
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);

  Serial.print('\n');
  //START THE COUNTDOWN 
  Serial.println("Smart Countdown Start");

  int countdwn = startValue;
  while (countdwn>= 1) {
    Serial.print("Count: ");
    Serial.println(countdwn);

    flashLED(countdwn); 

    delay(1000);
    countdwn = countdwn - 1;
  }
// THE COUNTDOWN IS COMPLETE
  Serial.println("Countdown Complete ");
}

void loop() {}