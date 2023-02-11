int Leds[] = {2, 3, 4, 5, 6, 7, 8, 9}; 
int num;
int num2;
int i;

void setup() {
  // put your setup code here, to run once:
  
  for(i = 0; i < 8; i++){
    pinMode(Leds[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(i = 0; i < 9; i++){
    digitalWrite(Leds[i], 0);
  }
  while(Serial.available() == 0){};
  num = 0;
  int num3 = 1;
  int aux;  

  for(int j = 0; j <= 13; j++){
    aux = num3 + num;
    num = num3;
    num3 = aux;        

    num2 = int(num);
    for(i = 0; i < 9; i++){
      if(num2 % 2 == 1){
        digitalWrite(Leds[i], 1);
      }
      else{
        digitalWrite(Leds[i], 0);
      }
      num2 = num2/2;
    }
    Serial.println(num);  
    delay(500);
  }
}

