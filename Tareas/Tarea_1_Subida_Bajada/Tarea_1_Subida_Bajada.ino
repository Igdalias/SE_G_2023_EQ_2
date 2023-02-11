int led = 2;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(int i = 0; i <= 255; i++){
    analogWrite(led, i);
    analogWrite(2, 255 - i);
    Serial.println(i);
    delay(50);
  }

  for(int i = 0; i <= 255; i--){
    analogWrite(led, i);
    analogWrite(2, 255 - i);
    Serial.println(i);
    delay(50);
  }
}
