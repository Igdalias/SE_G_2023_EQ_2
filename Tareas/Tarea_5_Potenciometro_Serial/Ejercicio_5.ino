int led = 2;
int pot1 = A0;
int pot2 = A1;
int i = 0;
int luz;
int tipo;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  tipo = analogRead(pot2) / 4;
  Serial.println(tipo);
  if(tipo >= 0 && tipo <= 122){
    luz = analogRead(pot1) / 4;
    analogWrite(led, luz);
    Serial.println("potenciometro: " + String(luz));
  }
  else{ 
    if(tipo >= 123 && tipo <= 255){   
      
      for(i = 0; i <= 255; i++){
        Serial.println(tipo);        
        analogWrite(led, i);
        analogWrite(2, 255 - i);
        Serial.println("Serial: " + String(i));
        delay(50);
      }
      for(i = 255; i >= 0; i--){
        Serial.println(tipo);
        analogWrite(led, i);
        analogWrite(2, 255 - i);
        Serial.println("Serial: " + String(i));
        delay(50);
      }
    }    
  }
  
}
