/* le ponen la paja de quien lo escribio organicacion 
bla bla bla bla  etc etc */


const int sPIR = 8; // Sensor de movimiento PIR | Pin 8 - Arduino Uno;
const int led = 13; // Led | Pin 13 - Arduino Uno;

int mov = 0; // Variable que guarda el cambio de estado del PIR


void setup() {
 // inicializamos variables y configuracion 
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(sPIR,INPUT);
Serial.println("Prueba Sensor de Movimiento IR");

}

void loop() {
 
movimiento();
}


void movimiento(){
  mov = digitalRead(sPIR);
  delay(50);
  if (mov == HIGH) {
    Serial.print(mov); Serial.print(" : "); Serial.println("Movimiento detectado"); 
    digitalWrite(led,HIGH);
    delay(500);
    digitalWrite(led,LOW);
    mov = 0;
  }
  else {
    Serial.print(mov); Serial.print(" : "); Serial.println("No se detecta movimiento");
    delay(100);
    }
  }
