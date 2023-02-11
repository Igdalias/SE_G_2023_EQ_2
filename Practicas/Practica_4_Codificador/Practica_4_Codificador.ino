int leds[] = {2, 3, 4, 5, 6, 7};
int pot = A0;
int A = 0;
int B = 0;
int C = 0;
int D = 0;

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 7; i++) {
    pinMode(leds[i], OUTPUT);
  }

  Serial.begin(9600);
}

int entrada = 0;
void loop() {
  // put your main code here, to run repeatedly:
  entrada = analogRead(pot) / 4;

  if (entrada >= 0 && entrada <= 51) {
    for (int i = 0; i < 7; i++) {
      digitalWrite(leds[0], 0);
      digitalWrite(leds[1], 0);
      digitalWrite(leds[2], 0);
      digitalWrite(leds[3], 0);
      A = 0;
      B = 0;
      C = 0;
      D = 0;
    }
  } else {
    if (entrada >= 52 && entrada <= 102) {
      digitalWrite(leds[3], 1);
      digitalWrite(leds[0], 0);
      digitalWrite(leds[1], 0);
      digitalWrite(leds[2], 0);
      A = 0;
      B = 0;
      C = 0;
      D = 1;
    } else {
      if (entrada >= 103 && entrada <= 153) {
        digitalWrite(leds[0], 0);
        digitalWrite(leds[1], 0);
        digitalWrite(leds[2], 1);
        digitalWrite(leds[3], 0);
        A = 0;
        B = 0;
        C = 1;
        D = 0;
      } else {
        if (entrada >= 154 && entrada <= 204) {
          digitalWrite(leds[0], 0);
          digitalWrite(leds[1], 1);
          digitalWrite(leds[2], 0);
          digitalWrite(leds[3], 0);
          A = 0;
          B = 1;
          C = 0;
          D = 0;
        } else {
          if (entrada >= 205 && entrada <= 255) {
            digitalWrite(leds[0], 1);
            digitalWrite(leds[1], 0);
            digitalWrite(leds[2], 0);
            digitalWrite(leds[3], 0);
            A = 1;
            B = 0;
            C = 0;
            D = 0;
          }
        }
      }
    }
  }

  

  if (C == 1 && A == 0 && B == 0 && D == 0) {
    digitalWrite(leds[4], 0);
    digitalWrite(leds[5], 1);
  } else {
    if (A == 0 && B == 1 && C == 0 && D == 0) {
      digitalWrite(leds[4], 1);
      digitalWrite(leds[5], 0);
    } else {
      if (A == 1 && B == 0 && C == 0 && D == 0) {
        digitalWrite(leds[4], 1);
        digitalWrite(leds[5], 1);
      } else {
        digitalWrite(leds[4], 0);
        digitalWrite(leds[5], 0);
      }
    }
  }

  Serial.println(entrada);
}
