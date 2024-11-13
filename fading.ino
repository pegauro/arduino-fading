//fading na luz do led com arduino
//pino do led definido como 9
int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

//a luminosidade varia de 0 a 255, assim de início ela aumenta e depois dimiui
void loop() {
  for(int valor = 0; valor <= 255; valor += 5){
      analogWrite(ledPin, valor);
      delay(30);
  }
  delay(500);
  for(int valor = 255; valor >= 0; valor -= 5){
    analogWrite(ledPin, valor);
    delay(30);
  }

  delay(500);
}
