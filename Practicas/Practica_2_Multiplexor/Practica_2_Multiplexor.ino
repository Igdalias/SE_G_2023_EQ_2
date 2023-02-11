int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int A;
int B;
int C;
int pot1 = A0;
int pot2 = A1;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

int entrada1 = 0;
int entrada2 = 0;
void loop() {
  // put your main code here, to run repeatedly:
  entrada1 = analogRead(pot1) / 4;
  entrada2 = analogRead(pot2) / 4;

  if (entrada1 >= 0 && entrada1 <= 63) {
    digitalWrite(led1, 0);
    digitalWrite(led3, 0);
    A = 0;
    C = 0;
  } else {
    if (entrada1 >= 64 && entrada1 <= 127) {
      digitalWrite(led1, 0);
      digitalWrite(led3, 1);
      A = 0;
      C = 1;
    } else {
      if (entrada1 >= 128 && entrada1 <= 191) {
        digitalWrite(led1, 1);
        digitalWrite(led3, 0);
        A = 1;
        C = 0;
      } else {
        if (entrada1 >= 192 && entrada1 <= 255) {
          digitalWrite(led1, 1);
          digitalWrite(led3, 1);
          A = 1;
          C = 1;
        }
      }
    }
  }

  if (entrada2 >= 0 && entrada2 <= 127) {
    digitalWrite(led2, 0);
    B = 0;
  } else {
    if (entrada2 >= 64 && entrada2 <= 255) {
      digitalWrite(led2, 1);
      B = 1;
    }
  }


  if (A == B && A != C) {
    digitalWrite(led4, 1);
  } else {
    if (A == 0 && B == 1 && C == 1) {
      digitalWrite(led4, 1);
    } else {
      if (A == 1 && B == 0 && C == 1) {
        digitalWrite(led4, 1);
      } else {
        digitalWrite(led4, 0);
      }
    }
  }
}
