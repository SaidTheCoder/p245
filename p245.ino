#define POTENTIOMETER_PIN 15
const byte buzzer=18;
void setup() {
  Serial.begin(9600);
  pinMode(PONTENTIOMETER_PIN,INPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() {
  int analogValue=analogRead(POTENTIOMETER_PIN);
  int brightness=map(analogValue,0,4095,0,255;
  if(brightness>200){
    Serial.println("decrease the volume");
    digitalWrite(buzzer,HIGH);
    delay(100)
  }
  digitalWrite(buzzer,Low);
  Serial.println(brightness);
  delay(30)

}
