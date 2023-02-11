//PWM = MODULACIÓN POR ANCHO DE PULSO
//ANALOGIA: consiste en similar una señal analogica a travez de la modificación del tiempo de trabajo
// (Alto) de una señal
//PWM = 1 Byte => 0 al 255
// Donde 0 = 0 Volts
// 255 = 5 Volts
// No todos los pines digitales son PWM, solo loq ue asi lo indican
// En el caso de arduino uno sol aquellos que cuentan con una virguliña a su lado (~)
int led = 6; // Pin compatible con PWM

void setup() {
  // put your setup code here, to run once:
  // A los pines PWM no se les establece modo de trabajo
}

int i;

void loop() {
  // put your main code here, to run repeatedly:
  for(i = 0; i < 255; i++){
    delay(10);
  }
  
  for(i = 255; i > 0; i--){
    analogWrite(led, i);
    delay(10);
  }
}
