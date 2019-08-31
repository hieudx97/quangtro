int LED=7;
int quangtro=A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (analogRead(quangtro)<200) {digitalWrite(LED, HIGH);delay(1000);}
  else
    if (analogRead(quangtro)>800) {digitalWrite(LED, LOW);delay(1000);}
}
