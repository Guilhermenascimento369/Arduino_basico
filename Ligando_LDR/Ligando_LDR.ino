const int pinoLDR=A0;
int leitura=0;
float tensao=0.0;

void setup() {
 Serial.begin(9600);

 pinMode(pinoLDR, INPUT);

}

void loop() {
  leitura= analogRead (pinoLDR);

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
