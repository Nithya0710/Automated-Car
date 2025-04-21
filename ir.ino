#include <IRremote.h>
#include <Servo.h>

int RECV_PIN = 3;
int signal = 0;

int servoPin = 11;
Servo servo;
int pos = 0;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();  // Start the receiver

  pinMode(signal, OUTPUT);
  pinMode(2, OUTPUT);   // Add this if using pin 2
  pinMode(5, OUTPUT);   // Add this if using pin 5
  pinMode(12, OUTPUT);  // Add this if using pin 12

  servo.attach(servoPin);
  servo.write(0);  // Start at 0 degrees
}

void loop() {
  if (irrecv.decode(&results)) {
    switch (results.value) {
      case 1349551067:  // Button 1
        Serial.println("1");
        digitalWrite(5, HIGH);
        digitalWrite(12, HIGH);
        for (pos = 0; pos < 90; pos++) {
          servo.write(pos);
          delay(10);  // Add delay for smooth motion
        }
        break;

      case 16736925:  // Button 2
        Serial.println("2");
        digitalWrite(5, LOW);
        digitalWrite(12, LOW);
        for (pos = 90; pos > 0; pos--) {
          servo.write(pos);
          delay(10);
        }
        break;

      case 16599223:  // Button 3
        Serial.println("3");
        digitalWrite(2, HIGH);
        break;

      case 16591063:  // Button 4
        Serial.println("4");
        digitalWrite(2, LOW);
        break;

      default:
        Serial.print("Received: ");
        Serial.println(results.value);
        break;
    }
    irrecv.resume();  // Ready for next value
  }
}
