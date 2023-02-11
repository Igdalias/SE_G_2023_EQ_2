int potenciometro = A0;  //analogico -> A0 - A5
//3 entradas
// - izquierda (gnd, 5v)
// - centro = A0
// - derecha (5v, gnd)

void setup() {
  // put your setup code here, to run once:

  // ADC = // 5 volts de voltaje de referencia 
  //10 bits de resolución -> 1024 valores = {0, 23}
  // Los pines analógicos solo funcionan como entradas, 
  //por lo que no se requiere que se defina el modo de trabajo
  // 0 = 0 volts
  //1023 = 5 volts
  Serial.begin(9600);
}

int valor;

void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(potenciometro);
  Serial.println("Valor leido: " + String(valor));
  delay(250);  //ms
}
