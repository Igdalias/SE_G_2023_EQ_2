int leds[] = {10, 11, 12};
int i;
float num;
int num2;

void setup() {
  // put your setup code here, to run once:
  //Debe establecerse el modo de trabajo de un pin digital

  for(i = 0; i < 3; i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(i = 0; i < 3; i++){
    digitalWrite(leds[i], 1);
  }
  delay(1000);

  for(i = 0; i < 3; i++){
    digitalWrite(leds[i], 0);
  }

  delay(1000);
}
