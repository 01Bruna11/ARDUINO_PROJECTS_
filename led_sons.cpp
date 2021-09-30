// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(A1, INPUT);
  pinMode(12, OUTPUT);
  pinMode(A2, INPUT);
  pinMode(11, OUTPUT);
  pinMode(A3, INPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  if (digitalRead(A0) == HIGH) {
    tone(8, 587, 200); // play tone 62 (D5 = 587 Hz)
    digitalWrite(13, HIGH);
    delay(200); // Wait for 200 millisecond(s)
    digitalWrite(13, LOW);
    delay(200); // Wait for 200 millisecond(s)
  }
  // if button A1
  if (digitalRead(A1) == HIGH) {
    tone(8, 523, 200); // play tone 60 (C5 = 523 Hz)
    digitalWrite(12, HIGH);
    delay(200); // Wait for 200 millisecond(s)
    digitalWrite(12, LOW);
    delay(200); // Wait for 200 millisecond(s)
  }
  // if button A2
  if (digitalRead(A2) == HIGH) {
    tone(8, 494, 200); // play tone 59 (B4 = 494 Hz)
    digitalWrite(11, HIGH);
    delay(200); // Wait for 200 millisecond(s)
    digitalWrite(11, LOW);
    delay(200); // Wait for 200 millisecond(s)
  }
  // if button press on A3 is detected
  if (digitalRead(A3) == HIGH) {
    tone(8, 440, 200); // play tone 57 (A4 = 440 Hz)
    digitalWrite(10, HIGH);
    delay(200); // Wait for 200 millisecond(s)
    digitalWrite(10, LOW);
    delay(200); // Wait for 200 millisecond(s)
  }
}