#define vermelho 10
#define verde 4
#define amarelo 7
void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
}

void loop() {
  digitalWrite(vermelho, HIGH);
  delay(5000);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  delay(3000);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, HIGH);
  delay(1000);
  digitalWrite(amarelo, LOW);
}
