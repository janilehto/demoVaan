#define LED 6
#define PAINIKE 5

void setup(){
  pinMode(LED, OUTPUT);
  pinMode(PAINIKE, INPUT_PULLUP);
}

#define TASO1 180
#define TASO2 100
void loop(){
  if(digitalRead(PAINIKE)==LOW){
    analogWrite(LED, TASO2);  
  }else{
    digitalWrite(LED, HIGH);  
  }
}
