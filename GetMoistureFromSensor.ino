
/*
#   Here are suggested sensor values:
#       Min  Typ  Max  Condition
#       0    0    0    sensor in open air
#       0    20   300  sensor in dry soil
#       300  580  700  sensor in humid soil
#       700  940  950  sensor in water
*/

int sensorPin = A0;
int sensorValue = 0;

void setup() {
    Serial.begin(9600);
}
void loop() {
  
    // read the value from the sensor:
    sensorValue = analogRead(sensorPin);
    Serial.print("Moisture = " );
    Serial.println(sensorValue);
    delay(1000);
}
