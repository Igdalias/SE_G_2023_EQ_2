int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int pot1 = A0;
int pot2 = A1;
int entrada1 = 0;
int entrada2 = 0;
int i;

void setup() {
  // put your setup code here, to run once:
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

int A;
int B;

void loop() {
  // put your main code here, to run repeatedly:


  entrada1 = analogRead(pot1) / 4;
  entrada2 = analogRead(pot2) / 4;

  if(entrada1 >= 0 && entrada1 <= 122){
    digitalWrite(led4, 0);
    A = 0;
    
  }else{
    if(entrada1 >= 123 && entrada1 <= 255){
      digitalWrite(led4, 1);
      A = 1;
      
    }
  }
  if(entrada2 >= 0 && entrada2 <= 122){
    digitalWrite(led3, 0);
    B = 0;
    
  }else{
    if(entrada2 >= 123 && entrada2 <= 255){
      digitalWrite(led3, 1);
      B = 1;
      
    }
  }
  if(A == 0 && B == 0){
    digitalWrite(led2, 0);
    digitalWrite(led1, 0);
  }else{
    if(A != B){
      digitalWrite(led1, 1);
    }
  }
  if(A == 1 && B == 1){
    digitalWrite(led2, 1);
    digitalWrite(led1, 0);
  }
}
