int led1 = 2;
int led2 = 3;
int led3 = 4;
int potA = A0;
int potB = A1;
int A;
int B;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

int entrada1 = 0;
int entrada2 = 0;

void loop() {
  // put your main code here, to run repeatedly:

  entrada1 = analogRead(potA) / 4;
  entrada2 = analogRead(potB) / 4;

  if (entrada1 >= 0 && entrada1 <= 127) {
    digitalWrite(led1, 0);
    A = 0;
  } else {
    if (entrada1 >= 128 && entrada1 >= 255) {
      digitalWrite(led1, 1);
      A = 1;
    }
  }
  if (entrada2 >= 0 && entrada2 <= 127) {
    digitalWrite(led2, 0);
    B = 0;
  } else {
    if (entrada2 >= 128 && entrada2 >= 255) {
      digitalWrite(led2, 1);
      B = 1;
    }
  }
  // Compuerta OR
  if(A == 0 && B == 0){
    digitalWrite(led3, 0);
  }else{
    digitalWrite(led3, 1);
  }

}  

