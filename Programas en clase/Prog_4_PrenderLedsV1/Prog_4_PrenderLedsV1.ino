int led1 = 10; //pin digital = {0 - 10}
int led2 = 11;
int led3 = 13;

void setup() {
  // put your setup code here, to run once:
  // Debe establecerse el modo de trabajo de un pin digital

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(led1, 1);
  digitalWrite(led2, 1);
  digitalWrite(led3, 1);
  delay(1000);

  // digitalWrite(led, LOW); //Apaga el led  
  //digitalWrite(led, false); //Apaga el led
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);  
}
