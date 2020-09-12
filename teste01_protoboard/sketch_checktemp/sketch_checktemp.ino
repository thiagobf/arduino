int ledPin1 = 10;
int ledPin2 = 9;
int temp = 29;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(1000);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  // If temperature is under 30C turns on the light red.
    if (temp < 30)
    {
      digitalWrite(ledPin1, HIGH);
      digitalWrite(ledPin2, LOW);
      delay(1000);
      temp = 31;
      delay(1000);
    }
    else
    {
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
      delay(1000);
      temp = 29;
    }
}
