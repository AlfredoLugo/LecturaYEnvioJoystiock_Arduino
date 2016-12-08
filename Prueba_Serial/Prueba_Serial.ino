//Definición de los pines de lectura de valores análogos
#define ejeX A1
#define ejeY A0

//Declaración de variables 
int valorX;
int valorY;

void setup() {
  //Inicialiación de la comunicación serial 
  Serial.begin(250000);}

void loop() {
  //Lectura de Joystick
  valorX = analogRead(ejeX);
  valorY = analogRead(ejeY);
  //Envio de datos y limpieza de buffer
  Serial.println(valorY);
  Serial.flush();
  Serial.println(valorX);
  Serial.flush();
}
