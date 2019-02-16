void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("eje X:  ");
  Serial.println(analogRead(A1));

  Serial.print("eje Y:  ");
  Serial.println(analogRead(A2));

  Serial.print("eje Z:  ");
  Serial.println(analogRead(A3));
  delay(300);


  if(analogRead(A1) > 500)
    digitalWrite(13,HIGH);    
  else
    digitalWrite(13,LOW);
  

}
