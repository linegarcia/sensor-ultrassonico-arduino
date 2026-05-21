#include <Servo.h>
#define trig 10
#define echo 11
#define buzzer 8
#define verde 4 
#define amarelo 3 
#define vermelho 2

long duration;
int distance;
Servo varredura;

void setup()
{
  varredura.attach(9) ; 
  
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(verde,OUTPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(vermelho,OUTPUT);
  
  Serial.begin(9600);
}

int medirDistancia(){
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
           
  duration = pulseIn(echo, HIGH);
                    
  distance = duration * 0.034 / 2;
                    
  return distance;
}
      
void alerta(int dist) {
  
  digitalWrite(vermelho, LOW);
  digitalWrite(verde,LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(buzzer, LOW);

  if(dist < 20) {
    digitalWrite(vermelho, HIGH);
    digitalWrite(buzzer, HIGH);
  }
  
  else if(dist < 40){
    digitalWrite(amarelo, HIGH);
  }
  
  else {
    digitalWrite(verde, HIGH);
  }
}              
                    
void loop () {
  for (int i = 0; i <= 180; i++){
   varredura.write(i); 
   delay(30); 
    
   distance = medirDistancia();
    
    alerta(distance);
    
  } 
  
  for (int i = 180; i >= 0; i--){
   varredura.write(i);
   delay(30);
    
   distance = medirDistancia();
    
   alerta(distance);  
    
  }
}