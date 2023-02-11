int led = 6;
int pot = A0;

void setup() {
  // put your setup code here, to run once:
  
}

int valor;
void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(pot); // 0 - 1023
// Opcion 1 = map
// Opcion 2 = logica

valor = valor/4;
analogWrite(led, valor); //0 - 255
}
