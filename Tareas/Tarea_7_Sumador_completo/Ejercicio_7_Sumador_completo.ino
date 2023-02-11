int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int pot1 = A0;
int pot2 = A1;
int A;
int B;
int C;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

int variable1;
int variable2;
void loop() {
  // put your main code here, to run repeatedly:

  variable1 = analogRead(pot1) / 4;
  variable2 = analogRead(pot2) / 4;

  if (variable1 >= 0 && variable1 <= 63) {
    digitalWrite(led5, 0);
    digitalWrite(led3, 0);
    A = 0;
    C = 0;
  } else {
    if (variable1 >= 64 && variable1 <= 126) {
      digitalWrite(led5, 0);
      digitalWrite(led3, 1);
      A = 0;
      C = 1;
    } else {
      if (variable1 >= 127 && variable1 <= 189) {
        digitalWrite(led5, 1);
        digitalWrite(led3, 0);
        A = 1;
        C = 0;
      } else {
        if (variable1 >= 188 && variable1 <= 255) {
          digitalWrite(led5, 1);
          digitalWrite(led3, 1);
          A = 1;
          C = 1;
        }
      }
    }
  }

  if (variable2 >= 0 && variable2 <= 63) {
    digitalWrite(led4, 0);
    B = 0;
  } else {
    if (variable2 >= 64 && variable2 <= 126) {
      digitalWrite(led4, 0);
      B = 0;
    } else {
      if (variable2 >= 127 && variable2 <= 189) {
        digitalWrite(led4, 1);
        B = 1;
      } else {
        if (variable2 >= 188 && variable2 <= 255) {
          digitalWrite(led4, 1);
          B = 1;
        }
      }
    }
  }

  if (A == 0 && B == 0 && C == 0) {
    digitalWrite(led1, 0);
    digitalWrite(led2, 0);
  } else {
    if (A == 0 && B == 0 && C == 1) {
      digitalWrite(led1, 1);
      digitalWrite(led2, 0);
    } else {
      if (A == 0 && B == 1 && C == 0) {
        digitalWrite(led1, 1);
        digitalWrite(led2, 0);
      } else {
        if (A == 0 && B == 1 && C == 1) {
          digitalWrite(led1, 0);
          digitalWrite(led2, 1);
        } else {
          if (A == 1 && B == 0 && C == 0) {
            digitalWrite(led1, 1);
            digitalWrite(led2, 0);
          } else {
            if (A == 1 && B == 0 && C == 1) {
              digitalWrite(led1, 0);
              digitalWrite(led2, 1);
            } else {
              if (A == 1 && B == 1 && C == 0) {
                digitalWrite(led1, 0);
                digitalWrite(led2, 1);
              } else {
                if (A == 1 && B == 1 && C == 1) {
                  digitalWrite(led1, 1);
                  digitalWrite(led2, 1);
                }
              }
            }
          }
        }
      }
    }
  }
}
