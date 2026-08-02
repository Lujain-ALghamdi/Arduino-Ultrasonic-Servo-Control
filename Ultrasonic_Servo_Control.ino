#include <Servo.h>

// Pin configuration
const int trigPin = 9;
const int echoPin = 10;
const int servoPin = 6;
const int ledPin = 3;

// Create servo object
Servo myServo;

// Variables for distance calculation
long duration;
int distance;


void setup() {

  // Set pin modes
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  // Attach servo to pin 6
  myServo.attach(servoPin);

  // Initial servo position
  myServo.write(0);

  // Start serial communication
  Serial.begin(9600);
}


void loop() {

  // Send ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);


  // Read echo time
  duration = pulseIn(echoPin, HIGH);


  // Calculate distance in cm
  distance = duration * 0.034 / 2;


  // Display distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");


  // Check if an obstacle is detected
  if (distance <= 10 && distance > 0) {

    // Move servo and turn on LED
    myServo.write(90);
    digitalWrite(ledPin, HIGH);

  } 
  
  else {

    // Return servo and turn off LED
    myServo.write(0);
    digitalWrite(ledPin, LOW);

  


  delay(200);

}