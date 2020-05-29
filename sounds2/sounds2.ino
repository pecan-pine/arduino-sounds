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

void loop() {
  // put your main code here, to run repeatedly:
long notes[] = {C , 2*D, .5*G};
for (int i = 0; i < 4; i++){
for (long note:notes){
  play(note);
  play(note);
  play(note);
  play(note);
  play(note);
  delay(50);
  glitch();
}}
notes[2] = E;
for (int i = 0; i < 4; i++){
for (long note:notes){
  play(note);
  play(note);
  play(note);
  play(note);
  play(note);
  delay(50);
  glitch();
}}
notes[2] = FF;
for (int i = 0; i < 4; i++){
for (long note:notes){
  play(note);
  play(note);
  play(note);
  play(note);
  play(note);
  delay(50);
  glitch();
}}
notes[2] = D;
for (int i = 0; i < 3; i++){
for (long note:notes){
  play(note);
  play(note);
  play(note);
  play(note);
  play(note);
  delay(50);
  glitch();
}}
notes[2] = D;
long notes2[] = {C , 2*D, E};
for (int i = 0; i < 1; i++){
for (long note:notes2){
  play(note);
  play(note);
  play(note);
  play(note);
  play(note);
  delay(50);
  glitch();
}}
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);
play(B);



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
