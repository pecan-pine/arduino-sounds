void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(11,OUTPUT);
}

void rpm(long n){
  digitalWrite(13,HIGH);
delay(n);
digitalWrite(11,LOW);
delay(n);
digitalWrite(11,HIGH);
delay(n);
digitalWrite(13,LOW);
delay(n);
}

void loop() {
for (int i = 0; i < 10; i++){
  rpm (45);
}
/*
for (int i = 0; 45 - i > 8; i++){
rpm(45-i);
}
for (int i = 0; i < 50; i++){
rpm(8);
}
for (int i = 0; 8 + i < 45; i++){
rpm(8 + i);
}*/
}
