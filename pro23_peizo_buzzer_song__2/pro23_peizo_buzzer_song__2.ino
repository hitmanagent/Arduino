#include "pitches.h"
int melody [] = { NOTE_CS7, NOTE_B5 , NOTE_CS7, NOTE_B5, NOTE_CS7, NOTE_B5, NOTE_CS7, NOTE_B5, NOTE_CS7, NOTE_B5 , NOTE_B5, NOTE_CS7, NOTE_B5, NOTE_CS7};
int noteDurations[] = { 2, 2 , 4, 8, 8, 4, 8, 8, 4, 4, 8, 8, 4, 4};
void setup () {
  for (int thisNote = 0; thisNote < 12; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(7, melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    noTone(7);
  }
}

void loop () {
}
