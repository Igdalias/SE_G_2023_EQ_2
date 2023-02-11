// 1. El metodo setup y loop deben permanecer aunque no se utilice alguno
// 2. La declaración y asignación de variables se realiza igual que en java
// Unicamente se debe considerar que los tipos de datos son

int valor; // En java es 4 bytes - en arduino es de 2 bytes
byte b;
char c;
long l;
String s;
bool boo;
int r[5]; // Los vectores se declaran y utilizan como en c++

// En arduino cuando se sobrepasa al limite al tipo de dato de una variable se aplica residuo (para evitar eso se puede poner if)

byte variable;

void setup() {
  // put your setup code here, to run once:

  
  variable = 0;
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(variable);
delay(250); // ms = milisegundos
}
