

// Set fuses to use internal oscillator to 
// free up D0, D1, then change STARTPIN to 0
#define STARTPIN  2
#define ENDPIN   10

void setup() {

  for (int p = STARTPIN; p <= ENDPIN; p++) {
    pinMode(p, OUTPUT);
  }
  
}

void loop() {
  
  for (int p = STARTPIN; p < ENDPIN; p++) {
    digitalWrite(p, HIGH);
    delay(100);
    digitalWrite(p, LOW);
  }
  for (int p = ENDPIN; p > STARTPIN; p--) {
    digitalWrite(p, HIGH);
    delay(100);
    digitalWrite(p, LOW);
  }

}
