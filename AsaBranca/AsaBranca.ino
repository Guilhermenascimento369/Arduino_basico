/*******************************************************************************
  Kit Iniciante para Arduino v8 - Homenagem Luiz Gonzaga 
  Reproduzir notas músicais em um buzzer.
*******************************************************************************/
const int pino_buzzer = 10; // pino onde o buzzer está conectado
const int pino_botao = 2;
const int tempo = 1000;

// Frequencias de cada nota musical
const int c = 261; // Dó
const int d = 293; // Ré
const int e = 329; // Mi
const int f = 349; // Fá
const int g = 391; // Sol
const int a = 440; // Lá
const int b = 493; // Si

int notas[] = {d,f,c,0,b,c,d,f,c,0,d,f,c,a,f,d,d,c,0,b,c,d,f,c,0,d,f,c,a,d,0,d,c,b,c,b,g,0,g,c,b,a,b,a,e,0,d,c,b,c,b,g,c,g,0};
int tempos[] = {1,1, 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
int tamanho = 0, i;

void setup() {
  pinMode(pino_botao, INPUT_PULLUP);
  pinMode(pino_buzzer, OUTPUT); // configura o pino com o buzzer como saída
  tamanho = sizeof(notas) / 2;
   for (i = 0; i < tamanho; i++) {
    tempos[i] = tempo/tempos[i];
   }
}
void loop() {
  bool estado_botao = digitalRead(pino_botao);
  if (estado_botao == LOW) {
    for (i = 0; i < tamanho; i++) {
      if (notas[i] == 0) {
        noTone(pino_buzzer);
        delay(tempos[i]);
      }
      else {
        tone(pino_buzzer, notas[i]);
        delay(tempos[i]);
      }
    }
  }
}
