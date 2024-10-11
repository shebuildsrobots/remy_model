#include <Servo.h>
Servo rightServo, leftServo;

void setup() {
  // Use a PWM pin on your board; I'm using a Metro Mini
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  leftServo.attach(5);
  rightServo.attach(7);
  // Play around to find the appropriate angle range for your servo.
  // You can reattach the arm in a new position if necessary.
  // I found that a range from 90-180 made sense for the left arm,
  // and a range of 100-160 for the right arm.
}

void loop() {
  // Adjust the random params within the range for each servo. 
  // We move to a random location near the bottom of the servo's range,
  // wait a random amount of time, the move to a random locatio near the 
  // top of the servo's range.
  rightServo.write(random(100, 120));
  delay(random(850, 1150));
  leftServo.write(random(90, 110));
  delay(random(850, 1150));
  rightServo.write(random(150, 160));
  delay(random(850, 1150));
  leftServo.write(random(170, 180));
  delay(random(850, 1150));
}
