#define ejeX A1
#define ejeY A0
#define seleccionMarcha A2

int valorX;
int valorY;
int valorMarcha;

void setup() {
  Serial.begin(250000);}

void loop() {
  valorX = analogRead(ejeX);
  valorY = analogRead(ejeY);
  valorMarcha = analogRead(seleccionMarcha);
  Serial.println(valorY);
  Serial.println(valorX);
  Serial.println(valorMarcha);
  //Serial.println();
  Serial.flush();
  //delay(500);
}
