int frequencia=2000;

const int pinoBuzzer= 10;
const int pinoBotao01= 9;
const int pinoBotao02=11;



void setup() {
  pinMode(pinoBuzzer,OUTPUT);
  pinMode(pinoBotao01,INPUT_PULLUP);
  pinMode(pinoBotao02,INPUT_PULLUP);

}

void loop() {
 if(digitalRead(pinoBotao01)==LOW){ //se botao 1 for ligado
    frequencia=frequencia+100;//adicone 100 a fr
  }

  
  if(digitalRead(pinoBotao02)==LOW){
    frequencia=frequencia-100;
  }
  tone(pinoBuzzer,frequencia);
  delay(1000);
  noTone(pinoBuzzer);
  delay(1000);

  
}
