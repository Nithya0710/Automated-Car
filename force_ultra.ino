//---Force---
const int forcePin = A1;
const int forceBuzzer = 4;
int forceValue = 0;

//---Ultrasonic Distance---
const int trigPin = 8;
const int echoPin = 7;
const int ultraBuzzer = 13;
float distance = 0;
long duration;

void setup() {
  //---Force Section---
  Serial.begin(9600);
  pinMode(forcePin, INPUT);
  pinMode(forceBuzzer, OUTPUT);

  //---Ultrasonic Distance---
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ultraBuzzer, OUTPUT);
}

void loop() {
  //---Force section---
  forceValue = analogRead(forcePin);
  Serial.print("Force: ");
  Serial.println(forceValue);

  if (forceValue >= 300) {
    tone(forceBuzzer, 1000);  // Louder tone frequency
  } else {
    noTone(forceBuzzer);
  }

  delay(200);  // Optional delay to stabilize readings


  //---Ultrasonic Distance---
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.017;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance < 50) {
    tone(ultraBuzzer, 3500, 300);  // Alert
    delay(150);
    noTone(ultraBuzzer);
    delay(100);
  }

  delay(200);  // Optional delay
}
