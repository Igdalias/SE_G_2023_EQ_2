int leds[] = {2, 3, 4, 5, 6, 7};
int pot1 = A0;
int pot2 = A1;
int A;
int B;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 6; i++){
    pinMode(leds[i], OUTPUT);
  }  
}

int entrada1 = 0;
int entrada2 = 0;
void loop() {
  // put your main code here, to run repeatedly:
  entrada1 = analogRead(pot1) / 4;
  entrada2 = analogRead(pot2) / 4;

  if(entrada1 >= 0 && entrada1 <= 127){
    digitalWrite(leds[0], 0);
    A = 0;
  }else{
    if(entrada1 >= 128 && entrada1 <= 255){
      digitalWrite(leds[0], 1);
      A = 1;
    }
  }

  if(entrada2 >= 0 && entrada2 <= 127){
    digitalWrite(leds[1], 0);
    B = 0;
  }else{
    if(entrada2 >= 128 && entrada2 <= 255){
      digitalWrite(leds[1], 1);
      B = 1;
    }
  }


  if(A == 0 && B == 0){
    digitalWrite(leds[2], 1);
    digitalWrite(leds[3], 0);
    digitalWrite(leds[4], 0);
    digitalWrite(leds[5], 0);
  }else{
    if(A == 0 && B == 1){
      digitalWrite(leds[3], 1); 
      digitalWrite(leds[2], 0);
      digitalWrite(leds[4], 0);
      digitalWrite(leds[5], 0);     
    }else{
      if(A == 1 && B == 0){
        digitalWrite(leds[4], 1);
        digitalWrite(leds[2], 0);
        digitalWrite(leds[3], 0);
        digitalWrite(leds[5], 0);
      }else{
        if(A == 1 && B == 1){
          digitalWrite(leds[5], 1);
          digitalWrite(leds[2], 0);
          digitalWrite(leds[3], 0);
          digitalWrite(leds[4], 0);
        }
      }
    }
  }
}
