
// Creation d'une constante

#define LED 9
#define LED1 10

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
}

void loop() {
  int i = 0;
  while(i < 5) {
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    delay(100);
    digitalWrite(LED1, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    i += 1;
  }

  delay(2000);
  int b = 0;
  while(b < 5) {
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    delay(100);
    digitalWrite(LED, HIGH);
    delay(100);
    digitalWrite(LED, LOW);
    b += 1;
  }
  
  delay(1000);

}
