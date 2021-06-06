int piezoBuzzer = 11;
int triggerPin = 10;
int echoPin = 9;
int tiempo;
int distancia;

void setup()
{
  pinMode(piezoBuzzer,OUTPUT); //Reconoce al buzzer como una salida.
  pinMode(triggerPin,OUTPUT); //Trigger como Salida
  pinMode(echoPin,INPUT); //entrada - recibe
  Serial.begin(9600);  //Serialización del monitor
}

void loop()
{
  digitalWrite(triggerPin,HIGH); //es para que nos dispare un sonido
  delayMicroseconds(1);
  digitalWrite(triggerPin,LOW); //lo apagamos
  tiempo=pulseIn(echoPin,HIGH); //para escuchar cuanto tiempo se demora en regresar
  distancia=tiempo/58.2; //el numero es una constante para medir en centime...
  
  if ((distancia > 0) and (distancia < 10))
  {
    noTone(piezoBuzzer);
  }
  
  if ((distancia>10) and (distancia<15))
  {
    tone(piezoBuzzer,261.63); //Frecuencia para C    
    delay(100);
    Serial.print("C:");
    Serial.println(distancia);
  }
  
  if ((distancia>15) and (distancia<20))
  {
    tone(piezoBuzzer,277.645); //Frecuencia para C♯/D♭
    delay(100);
    Serial.print("C♯/D♭:");
    Serial.println(distancia);
  }
  
  
  if ((distancia>20) and (distancia<25))
  {
    tone(piezoBuzzer,293.66); //Frecuencia para D 
    delay(100);
    Serial.print("D:");
    Serial.println(distancia);
  }
  
  if ((distancia>25) and (distancia<30))
  {
    tone(piezoBuzzer,311.645); //Frecuencia para D♯/E♭ 
    delay(100);
    Serial.print("D♯/E♭:");
    Serial.println(distancia);
  }
  
  if ((distancia>30) and (distancia<35))
  {
    tone(piezoBuzzer,329.63); //Frecuencia para E 
    delay(100);
    Serial.print("E:");
    Serial.println(distancia);
  }
  
  if ((distancia>35) and (distancia<40))
  {
    tone(piezoBuzzer,349.24); //Frecuencia para F
    delay(100);
    Serial.print("F/E♯:");
    Serial.println(distancia);
  }
  
  if ((distancia>40) and (distancia<45))
  {
    tone(piezoBuzzer,370.62); //Frecuencia para F♯/G♭ 
    delay(100);
    Serial.print("F♯/G♭:");
    Serial.println(distancia);
  }
  
  if ((distancia>45) and (distancia<50))
  {
    tone(piezoBuzzer,392); //Frecuencia para G 
    delay(100);
    Serial.print("G:");
    Serial.println(distancia);
  }
  
  if ((distancia>50) and (distancia<55))
  {
    tone(piezoBuzzer,416); //Frecuencia para G♯/A♭ 
    delay(100);
    Serial.print("G♯/A♭:");
    Serial.println(distancia);
  }
  
  if ((distancia>55) and (distancia<60))
  {
    tone(piezoBuzzer,440); //Frecuencia para A 
    delay(100);
    Serial.print("A:");
    Serial.println(distancia);
  }

  if ((distancia>60) and (distancia<65))
  {
    tone(piezoBuzzer,466.94); //Frecuencia para A♯/B♭  
    delay(100);
    Serial.print("A♯/B♭:");
    Serial.println(distancia);
  }
  
  if ((distancia>65) and (distancia<70))
  {
    tone(piezoBuzzer,493.88); //Frecuencia para B 
    delay(100);
    Serial.print("B:");
    Serial.println(distancia);
  }

  if ((distancia>70) and (distancia<75)) //26.94
  {
    tone(piezoBuzzer,520.82); //Frecuencia para C 
    delay(100);
    Serial.print("C:");
    Serial.println(distancia);
  }
  
  if ((distancia > 75))
  {
    noTone(piezoBuzzer);
  } 
}
