int counter; // Definisali varijablu „counter“ kao brojač
void setup() // Void jeste funkcija koju moramo upotrijebiti na otvaranju bloka. Blok setup se uvijek pojavljuje prije bloka loop. Setup je funkcija koja razvija block, koji se samo jednom desi, i tu staje. 
{
  pinMode(8, OUTPUT); // funkcija imenuje elemente. Imenovani kao OUTPUT-izlaz, i redni broj digitalnog pina, koji u drugom bloku kontrolišemo.
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}
void loop() // Funkcijom loop se otvara blok, koji se neprestano ponavlja. 
{
  digitalWrite(8, HIGH); // Funkcija koja omogućava dodjeljivanje određenom digitalnom pinu opciju HIGH ili LOW, to jeste 1 ili 0, radi ili ne radi.
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(9, HIGH);
  digitalWrite(10, LOW);
  delay(5000); // Čekanje 5000 milisekundi ili 5 sekundi
  digitalWrite(8, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(2000); // Čekanje 2000 milisekundi ili 2 sekunde
  digitalWrite(8, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(2000); 
  digitalWrite(8, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(3000);
  for (counter = 0; counter < 4; ++counter) { //otvorena petlja, koja staje kada dođe do 4 ponavljanja. 
    digitalWrite(8, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(500); 
    digitalWrite(8, LOW);
    digitalWrite(3, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    delay(500);
  }
  digitalWrite(8, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(2000); 
}
