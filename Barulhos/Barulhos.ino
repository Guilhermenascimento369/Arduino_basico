/*******************************************************************************
* RoboCore Kit Iniciante V8 para Arduino - Fazendo Barulho 1
* Pisca-pisca sonoro.
*******************************************************************************/

int frequencia = 2000;
const int botao1=9;
const int botao2=8;

void setup(){
  pinMode(10, OUTPUT); // configura o pino com o buzzer como saída
  pinMode(botao1,INPUT_PULLUP);
  pinMode(botao2,INPUT_PULLUP);
}

void loop(){
  if(digitalRead(botao1)==LOW){
    frequencia=frequencia+100;
  }
  
if(digitalRead(botao2)==LOW){
   frequencia=frequencia-100; 
   }
   tone(10,frequencia);
  delay(1000);
  noTone(10);
  delay(1000);

}
