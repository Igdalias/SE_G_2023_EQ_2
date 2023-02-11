int led = 13;  //pin digital = {0 - 13}
// Arduino uno y Arduino MEGA cuentan con un led 
//de prueba en la placa ubicado en el pin 13


void setup() {
  // put your setup code here, to run once:
  // Debe establecerse el modo de trabajo fr un pin digital, 
  //ya sea este de entrada o de salida
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  //DigitalWrite(led, HIGH); // Prender el led
  //digitalWrite(led, true); // Prender el led
  digitalWrite(led, 1);

  digitalWrite(led, LOW);
}
