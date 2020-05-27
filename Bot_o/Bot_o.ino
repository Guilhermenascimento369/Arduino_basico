void setup() {
 pinMode(9,INPUT);// configura o pino com o botão como entrada
 pinMode(12,OUTPUT);// configura o pino com o botão como entrada
 pinMode(11,OUTPUT);//LED vermelho
 pinMode(10,INPUT);
}

void loop() {
if(digitalRead(9)==HIGH){// se botão estiver pressionado (HIGH)
  digitalWrite(12,HIGH);// acende o LED
  
}
else{// se não estiver pressionado (LOW)
  digitalWrite(12,LOW);// apaga o LED
}

if(digitalRead(10)==HIGH){
  digitalWrite(11,LOW);
  
}
else{
  digitalWrite(11,HIGH);
  
}
}
