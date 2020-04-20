/*
 * Rui Santos 
 * Complete Project Details https://randomnerdtutorials.com
*/


int sensorPin=A0;
float val;

void setup(){
//  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(13,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  digitalWrite(3,HIGH);
  
//digitalWrite(10,HIGH);

  Serial.begin (9600);
}
  
void loop (){
  val =analogRead(sensorPin);
  Serial.println (val);
  // when the sensor detects a signal above the threshold value, LED flashes
//  Serial.Plotter()
  if(val>20)
  {
    digitalWrite(13,HIGH); 
   digitalWrite(4,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
    digitalWrite(4,LOW);
  }
}
