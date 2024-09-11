// C++ code
int boton;
int contador;
int suma;
//

void setup()
{
 Serial.begin(9600);
 pinMode(4,INPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(13,OUTPUT);
  
contador = 0;
suma = 0;
}

void loop()
{
	  boton = digitalRead(4);
  	Serial.println(boton);
  
  if (contador == 0){
    
    digitalWrite(13, HIGH);
  
  }
  else {
  digitalWrite(13, LOW);
  }
  
  if (boton == 1 && contador >= 0 && contador < 5){
    
        
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    
        
    contador = contador + 1;
    suma = suma + 100;
    
    
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    delay(suma);
    
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);

    }
  
else if (boton == 1 && contador >= 5 && contador < 10) {
    
        
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    
        
    contador = contador + 1;
    suma = suma + 500;
    
    
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    delay(suma);
    
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  
  }
  
else if (boton == 1 && contador >= 10 && contador < 15) {
    
        
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    delay(500);
    
        
    contador = contador + 1;
    suma = suma + 1000;
    
    
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    delay(suma);
      
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
  }
  
  
  else {
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    }
  
  if (contador == 15){
    
    contador = 0;
    suma = 0;
  
  }
  Serial.println(contador);
  Serial.println(suma);

}
