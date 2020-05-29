#define A 220
#define G 196
#define FF 174.61
#define E 164.81
#define D 146.83
#define C 130.81
#define B 123.47
#define Bf 116.54
#define Df 138.59
#define Ef 155.56
#define Gf 185
#define Af 207.65

void onoff(long on, long s);
long hz(long freq);

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  for (int i = 0; i < 15; i++){
    plays(5 ,1);
    delay(10);
  }
  for (int i = 5; i < 20; i++){
  plays(i , 1);
  }
  for (int i = 20; i < 40; i++){
    plays(5 * i - 5*20 + 20, 1);
  }
  for (int i = 0; i < 10; i++){
    plays( 40 - 4 * i, 1);
  }
    for (int i = 0; i < 1; i++){
    plays(5 ,1);
    delay(10);
  }
}

void plays(long n, long t) { // n in Hz (n for note) // t in s 
  t = floor( t * n / 4);
  n = abs(1000 / n);
  //n = abs(200 / n);
  for (int i = 0; i < t; i++){
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(n / 2);
  digitalWrite(11, LOW);
  delay(n/2);                
  digitalWrite(13, LOW); 
  digitalWrite(11, HIGH);
  delay(n/2);
  digitalWrite(11, LOW);
  delay(n/2);
}
}

void play(long n, long t) { // n in Hz (n for note) // t in s 
  t = floor( t * n / 4);
  n = abs(1000 / n);
  //n = abs(200 / n);
  for (int i = 0; i < t; i++){
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(n / 2);
  digitalWrite(11, LOW);
  delay(n/2);                
  digitalWrite(13, LOW); 
  digitalWrite(11, HIGH);
  delay(n/2);
  digitalWrite(11, LOW);
  delay(n/2);
}
  delay(50);
}

// the loop function runs over and over again forever
void loop() {
 
for (int i = 0; i < 8; i++){
play(E/4, 1);
delay(150);
play(C/2, 1);
play(D/4,1);
}
play(E/2, 1);
play(D/3,1);
play(D/4, 1);
play(D/5, 1);

for (int i = 0; i < 2; i++){
for (int i = 0; i < 2; i++){
play(E/(2* 5), 1);
delay(10);
play(C/4, 1);
play(D/5,2);
}
play(E/2, 1);
play(D/3,1);
play(D/4, 1);
play(D/5, 1);
}

for (int i = 0; i < 1; i++){
play(D/5, 1);
play(D/5, 1);
play(D/5, 1);
play(D/6,1);
play(D/8,1);
play(D/10, 1);
play(D/12,1);
play(D/6, 1);
play(D/8, 1);
play(D/10, 1);
}
plays(D/10, 5);







  /*
  play(A, 2);
  play(A, 2);
  play(A, 2);
  play(FF, 1);
  play(2*C, 1);
  play(A, 2);
  play(FF, 1);
  play(2*C, 1);
  play(A, 3);
  play(2*E, 2);
  play(2*E, 2);
  play(2*E, 2);
  play(FF, 1);
  play(2*C, 1);
  play(Af, 2);
  play(FF, 1);
  play(2*C, 1);
  play(A, 2);
  play(2*A, 2);
  play(A, 1);
  play(A, 1);
  play(2*A, 2);
  play(2*Af, 1);
  play(2*G, 1);
  
  play(2*Gf, 1);
  play(2*FF, 1);
  play(2*Gf, 1);
  play(Bf, 1);
  play(2*Ef, 2);
  play(D,1);
  play(Df, 2);
  */

}
