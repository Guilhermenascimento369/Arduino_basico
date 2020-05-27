


int frequencia = 2000;  

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
 tone(10,frequencia);
 delay(1000);
 noTone(10);
 delay(1000);
}
