/*
 Programmer Name: Talha Tallat
 Program Name: Weight Measurement System
 Program Description: Arduino Nano was programmed to measure the weight accurately when the load is applied to the load cell 
 Date: 20-12-2020
*/

float analog3 = A0;

void setup(){
  // put your setup code here, to run once:
  Serial.begin (9600); //bit rate 
}

void loop(){

  float sensorVal = analogRead(analog3); // Read analogue data from input A0 and stored into the "sensorVal" variable 

  float vlotage = sensorVal/204.6; // divding by the digital unit 

  float grams = (sensorVal-22.5) / 0.3495; // Rescaled using line equation 

 Serial.print(" Voltage: ");
 Serial.print(vlotage);

 Serial.print("   A/D value: ");
 Serial.print(sensorVal     );

 Serial.print("   grams: ");
 Serial.print(grams);
 Serial.println("\n---------------------------------------------------");
 
 delay(1000); // delay of 1 sec
}
