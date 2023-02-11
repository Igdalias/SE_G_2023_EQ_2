int Leds[] = {2, 3, 4, 5};
int potenciometro = A0;

void setup() {
    for(int i = 0; i < 4; i++){
      pinMode(Leds[i], OUTPUT);      

    }
    
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0; i < 4; i++){
    digitalWrite(Leds[i], 0);  
  }
  
  int valor = analogRead(potenciometro);
  int valor2 = map(valor, 0, 1023, 0, 4);
  for(int i = 0; i < 4; i++){
     if(valor2 > i){
       digitalWrite(Leds[i], 1);
     }   
  }  
}
