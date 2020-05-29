#define D 60
#define E 70
#define FF 80
#define G 100
#define A 110
#define B 130
#define C 170
#define H 250


void onoff(long on, long s);
long hz(long freq);

void glitch(){
    play(H);
  play(H);
  play(C);
  play(C);
  play(G);
  play(E);
  play(B);
  play(E);
  play(C);
  delay(50);
  play(B);
  play(C);
  delay(50);
  play(B);
  play(A);
}

void glitch2(){
for (int i = 0; i < 20; i++){
  play(D + i);
}
}
void glitch3(){
for (int i = 0; i < 20; i++){
  play(C - i);
}
}
void glitch4(){
  for (int i = 0; i < 40; i++){
    play(D+2*i);
  }
  for(int i = 0; i < 5; i++){
  play(D + 80);
  }
  for (int i = 0; i < 70; i++){
    play(D + 80 - i);
  }
  for (int i = 0; i < 20; i++){
    play(D + 10);
  }
}
void times(long note, int n){
  for (int i = 0; i < n; i++){
    play(note);
  }
}

void growl(){
glitch();
glitch2();
glitch3();
times(A,5);
times(B,2);
times(D,2);
}

void growl2(){
glitch();
times(A,5);
glitch2();
times(D,1);
glitch3();
times(A/2,5);
times(C,2);
times(D,1);
}

void growl3(){
glitch();
times(C,5);
glitch2();
times(C, 5);
glitch3();
times(A/2,5);
times(C/2,2);
times(C, 10);
}

void growl4(){
glitch();
times(C,10);
glitch2();
times(C, 10);
glitch3();
times(C, 17);
}

void growl5(){
glitch();
times(C,15);
glitch2();
times(C, 15);
glitch3();
times(C, 17);
}

void growl6(){
times(C,15);
glitch2();
times(C, 15);
glitch3();
times(C, 17);
}

void chord(){
  for (int i = 0; i < 50; i++){
  play(A);
  play(D);
  }
    for (int i = 0; i < 50; i++){
  play(C);
  play(D);
  }
  for (int i = 0; i < 10; i++){
  play(C);
  play(D);
  play(C);
  play(C);
  }
    for (int i = 0; i < 10; i++){
  play(C);
  play(C);
  play(C);
  play(D);
  play(C);
  play(C);
  }
  for (int i = 0; i < 5; i++){
  play(C);
  play(C);
  play(C);
  play(C);
  play(C);
  play(D);
  play(C);
  play(C);
  }
  for (int i = 0; i < 10; i++){
  play(C);
  play(C);
  play(C);
  play(C);
  play(C);
  play(C);
  play(C);
  play(C);
  play(C);
  play(D);
  play(C);
  play(C);
  }
  for (int i = 0; i < 100; i ++){
    play(C);
  }
  for (int i = 0; i < 85; i++){
    play(C - 2*i);
  }
  for (int i = 0; i < 10; i++){
    play(C - 2 * 85);
  }
  for (int i = 85; i < 87; i++){
    play(C - 2 * i);
  }
  for (int i = 0; i < 4; i++){
    play(C - 2* 87);
  }
  for (int i = 0; i < 1; i++){
    play(C - 2 * 84);
  }
  for (int i = 0; i < 8; i++){
    play(0);
  }
  play(C - 2 * 84);

  for (int i = 0; i < 3; i++){
    play(C - 2* 87);
  }
  for (int i = 87; i < 100; i++){
    play(C - 2*i);
  }
}


void loop() {
chord();
for (int i = 0; i < 4; i++){
  growl();
  growl2();
}
for (int i = 0; i < 4; i++){
  growl3();
  growl4();
}
for (int i = 0; i < 2; i++){
  growl5();
  growl6();
}
for (int i = 0; i < 7; i++){
glitch();
}
glitch4();

}

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
}

void play(long n) { // n in Hz (n for note) // t in s 
  n = abs(1000 / n);
  //n = abs(200 / n);
  for (int i = 0; i < 2; i++){
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
