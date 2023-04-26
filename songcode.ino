// cyana code
/*
  Thousand Years by Christina Perri
*/

  #define Note_G4 392
  #define Note_B4 494
  #define Note_A4 440
  #define Note_D5 587
  #define Note_C5 523
  #define Note_FS4 370
  #define Note_F4 349
  #define Rest    0


  // can change speed of song
  int tempo = 170;

  //change to whichever pin being used
  int buzzer = 13;

  // notes of the melody followed by the duration.
  // 4 means quarter note, 2 means half note...
  // negative numbers represent dotted notes
// randee code
  int melody[] = {

    Note_G4,-2, // 1st measure
    Note_G4,-2,
    Note_G4,-2,
    Note_B4,4, Note_A4,4, Note_G4,4, // line 1
    Note_G4,-2, 
    Note_G4,-2,
    Note_G4,-2,
    Note_D5,4, Note_C5,4, Note_B4,4, // line 2
    Note_G4,-2,
    Note_D5,4, Note_C5,4, Note_B4,4,
    Note_A4,2, Note_B4,4,
    Note_FS4,2, Note_G4,4, // line 3, 
    //repeat first 3 lines
    Note_G4,-2, // 1st measure
    Note_G4,-2,
    Note_G4,-2,
    Note_B4,4, Note_A4,4, Note_G4,4, // line 1
    Note_G4,-2, 
    Note_G4,-2,
    Note_G4,-2,
    Note_D5,4, Note_C5,4, Note_B4,4, // line 2

// so -4 means dotted quarter, -2 means dooted half,... 
  int melody[] = {

// natalie code

void setup() {

  // felix code
   divider = melody[thisNote + 1];
    if (divider > 0) {
      // regula note, just proceed
      noteDuration = (wholenote) / divider;
    } else if (divider < 0) {
      // dotted note are represented with negative durations
      noteDuration = (wholenote) / abs(divider);
      noteDuration *= 1.5; // increases the duration in half for dotted notes
    }  
    //w we only play note for 90% of duration, leaving 10% as pause
    tone(buzzer, melody[thisNote], noteDuration*0.9);

    // wait for the specific duration before playing note
    delay(noteDuration);

    // stop the waveform generation before next note
    noTone(buzzer);  
    }
}

void loop() {
// no need to repeat the melody
}
