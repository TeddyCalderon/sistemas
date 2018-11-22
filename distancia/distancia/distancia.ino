void setup() {
  // Comunicación seria a 9600 baudios
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}


void loop() {
  // Leemos el promedio de la entrada analógica 0 :
  int ADC_SHARP=ADC0_promedio(20);
  if(ADC_SHARP>195)
  {
    digitalWrite(13, HIGH);
    Serial.print("Objeto Detectado:");
  }
  else
  {
    digitalWrite(13, LOW);
    Serial.print("Objeto ausente:");
  }
  
  Serial.println(ADC_SHARP);
  delay(10);
}

int ADC0_promedio(int n)
{
  long suma=0;
  for(int i=0;i<n;i++)
  {
    suma=suma+analogRead(A0);
  }  
  return(suma/n);
}
