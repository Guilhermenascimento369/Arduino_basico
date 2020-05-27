void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);//verde
pinMode(12,OUTPUT);//amarelo
pinMode(13,OUTPUT);//vermelho
}
void loop() {
 digitalWrite (11,HIGH);
 digitalWrite (12,LOW);
 digitalWrite (13,LOW);

 delay (3000);

 //sinal aberto

 digitalWrite(11,LOW);
 digitalWrite(12,HIGH);
 digitalWrite(13,LOW);
 delay(2000);

//amalero

digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
//fechado
 
 

}
