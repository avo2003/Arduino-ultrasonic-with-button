int trigPin = 9;
int echoPin = 10;
int led = 7;
int button = 12;
int type = 0;

void setup() {
  Serial.begin(9600); 
   pinMode(led, OUTPUT);
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(button, INPUT);
  
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);

 if(digitalRead(button) == HIGH && type == 0){
  type += 1;
  delay(500);
  }
  if(digitalRead(button) == HIGH && type == 1){
  type -= 1;
  delay(500);
  }
 if(distance<=10 && type == 1) 
  {
    digitalWrite(led, HIGH);
}
   else if(distance>10)
 {
     digitalWrite(led, LOW);
   }
}
