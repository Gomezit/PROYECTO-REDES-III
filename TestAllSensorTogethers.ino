/*
#   Here are suggested sensor values:
#       Min  Typ  Max  Condition
#       0    0    0    sensor in open air
#       0    20   300  sensor in dry soil
#       300  580  700  sensor in humid soil
#       700  940  950  sensor in water
*/

#include <math.h>

int xVal = 0;
int yVal = 0;
int zVal = 0;
int moistureSensorPin = A0;
int moistureSensorValue = 0;

double angleYZ = 0;
double angleXZ = 0;

void setup() {
    
  Serial.begin(9600);
}

void loop() {

  moistureSensorValue = analogRead(moistureSensorPin);
  xVal = analogRead(1);
  yVal = analogRead(2);
  zVal = analogRead(3);
  

  if(analogRead(A1) > 400)
    digitalWrite(13,HIGH);    
  else
    digitalWrite(13,LOW);

  xVal = map(xVal, 0, 1023, -500, 500);
  yVal = map(yVal, 0, 1023, -500, 500);
  zVal = map(zVal, 0, 1023, -500, 500);

  angleYZ = atan((double)yVal / (double)zVal);
  angleYZ = angleYZ*(57.2958);

  angleXZ = atan((double)xVal / (double)zVal);
  angleXZ = angleXZ*(57.2958);

  
  Serial.print("Moisture = " );
  Serial.print(moistureSensorValue); 
  Serial.print("       " ); 
  Serial.write("Angle yz:  ");
  Serial.print(angleYZ);
  Serial.print("       " ); 
  Serial.write("Angle xz:  ");
  Serial.print(angleXZ);
  Serial.write("\n");

  delay(300);
}
