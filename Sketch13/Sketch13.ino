/*
 Name:		Sketch13.ino
 Created:	7/29/2020 9:23:48 AM
 Author:	Janie
*/

#include "CapacitiveSensor.h"
CapacitiveSensor capSensor = CapacitiveSensor(4, 2);

#pragma region Variables
int threshold = 1000;
const int ledPin = 12;
#pragma endregion

// the setup function runs once when you press reset or power the board
void setup() {
	Serial.begin(9600);
	pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	long sensorValue = capSensor.capacitiveSensor(30);
	Serial.println(sensorValue);

	if (sensorValue>threshold)
	{
		digitalWrite(ledPin, HIGH);
	}
	else
	{
		digitalWrite(ledPin, LOW);
	}
	delay(10);
}
