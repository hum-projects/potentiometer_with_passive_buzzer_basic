int buzzpin = 11;
int tone;
int potval;
int potpin = A2;
int delt = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzpin,OUTPUT);
  pinMode(potpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potval = analogRead(potpin);
  tone = ((9940./1023.) * potval) + 60;

  Serial.println(v);

  analogWrite(buzzpin,v);
  delay(delt);

}
