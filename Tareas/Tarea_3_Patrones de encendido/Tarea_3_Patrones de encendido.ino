int led[] = {2, 3, 4, 5, 6, 7, 8, 9};
int leds[] = {9, 8, 7, 6, 5, 4, 3, 2};
int numeros;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 9; i++){
    pinMode(led[i], OUTPUT);
  }

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Metodo 1
  for(int i = 0; i < 9; i++){
    numeros = random(0, 8);
    digitalWrite(led[numeros], 1);
    Serial.println(numeros);
    delay(1000);
    digitalWrite(led[numeros], 0);
  }

/*
  // Metodo 2
  for(int i = 0; i < 9; i++){
    digitalWrite(led[i], 1);
    delay(1000);
    digitalWrite(led[i], 0);
    Serial.println(i);
  }
*/

/*
  // Metodo 3
  for(int i = 0; i < 9; i++){
    digitalWrite(led[i], 1);
    delay(50);
  }
  for(int i = 0; i < 9; i++){
    digitalWrite(leds[i], 0);
    delay(50);
  }

  delay(1000);
  
  for(int i = 0; i < 9; i++){
    digitalWrite(led[i], 1);
  }
  delay(1000);
  for(int i = 0; i < 9; i++){
    digitalWrite(led[i], 0);
  }
  delay(1000);
*/
}
