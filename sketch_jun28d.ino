int led = 8;
int butt=13;
void setup() {

  pinMode(led, OUTPUT);
  pinMode(butt, INPUT);
}

void loop() {
if(digitalRead(butt)==HIGH){
  digitalWrite(led,HIGH);
  }else{
     digitalWrite(led,LOW);
    }
}
