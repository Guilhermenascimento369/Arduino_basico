const int pinoLDR=A0;
const int pinoLEDg=7;
const int pinoLEDr=8;
const int pinoLEDy=9;

int leitura=0;
float tensao=0.0;

void setup() {
 Serial.begin(9600);

 pinMode(pinoLDR, INPUT);
 pinMode(pinoLEDg,OUTPUT);
  pinMode(pinoLEDr,OUTPUT);
   pinMode(pinoLEDy,OUTPUT);
}

void loop() {
  leitura= analogRead (pinoLDR);


if(leitura<2){
  digitalWrite(pinoLEDr,HIGH);
}
else{
  digitalWrite(pinoLEDr,LOW);
}
if(leitura<=5 && leitura>=2 ){
  digitalWrite(pinoLEDy,HIGH);
  
  }
else{
  digitalWrite(pinoLEDy,LOW);
  }
  if(leitura>5){
    digitalWrite(pinoLEDg,HIGH);
    }else{
      digitalWrite(pinoLEDg,LOW);
      }
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t");


 tensao=leitura *5.0/1023.0;
 Serial.print("Tensão: ");
 Serial.print(tensao);
 Serial.print("V");

 Serial.println();

 delay(1000);

}
