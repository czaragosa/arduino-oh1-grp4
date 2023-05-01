// cyana code
/*
  Thousand Years by Christina Perri
*/

  #define Note_G4 392
  #define Note_B4 494
  #define Note_A4 440
  #define Note_D5 587
  #define Note_C4 261
  #define Note_FS4 370
  #define Note_F4 349
  #define Note_E4 329
  #define Note_D4 293
  #define Note_A3 220
  #define Note_C5 523
  #define Note_E5 659
  #define Note_D5 587
  #define Note_B3 247
  #define Note_G3 196
  #define Note_F3 175
  #define Note_Bb4 466
  #define Rest    0


  // can change speed of song
  int tempo = 125;

  //change to whichever pin being used
  int buzzer = 13;

  // notes of the melody followed by the duration.
  // 4 means quarter note, 2 means half note...
  // negative numbers represent dotted notes
  // so -4 means dotted quarter, -2 means dooted half,...
  int melody[] = {

    Note_C4,2,
    Note_C4,2,
    Note_C4,2,
    Note_E4,4, Note_D4,4, Note_C4,4, //4
    Note_C4,2,
    Note_C4,2,
    Note_C4,2,
    Note_G4,4, Note_F4,8, Note_E4,-4, //8
    Note_C4,2, //brave
    Note_G4,4, Note_F4,8, Note_E4,-4,
    Note_D4,2, Note_E4,4,
    Note_A3,2, Note_C4,4, //12
    Note_C4,2,
    Note_C4,2,

        //Randee Code 
    Note_C4,2,
    Note_C4,2,
    Note_E4,8, Note_D4,-4, Note_C4,4, //16
    Note_C4,2,
    Note_C4,2,
    Note_C4,2,
    Note_G4,4, Note_F4,8, Note_E4,-4, //20
    Note_C4,-4, Note_G4,4, Note_F4,8, Note_E4,-4,
    Note_D4,2, Note_E4,4,
    Note_A3,2, Note_C4,4, //some-
    Note_C4,1, //-how
    Rest,4, 
    Note_C5,-2, Note_D5,-2, //one step
    Note_E5,1, Note_D5,1, //clo-ser
    Note_D4,-8, Note_F4,-16, Note_D4,4, Note_D4,-8, Note_F4,-16, Note_D4,4, //I have died everday
    Note_G4,-4, Note_F4,-8, Note_D4,-8, Note_B3,-4, //waiting for you
    Note_D4,-8, Note_F4,-16, Note_D4,4, Note_D4,-8, Note_F4,-16, Note_D4,4,
    Note_G4,-4, Note_F4,-8, Note_D4,-8, Note_B3,-8, Note_B3,-16, Note_B3,-16, //I have loved you for a 
    Note_E4,-2, Note_D4,-8, //thousand
    Note_G3,-4, Note_B3,-8, Note_B3,-8, Note_B3,-8, Note_C4,-16, Note_B3,-16, //years  I'll love you for a
    Note_E4,-4, Note_D4,-4, //thou-sand
    Note_F3,-2, //more
    Note_Bb4,-4, Note_A4,-4,
    Note_F4,-2, //repeat from beginning???

    Note_C4,2, //time
    Note_C4,2, //stands
    Note_C4,2, //still
    Note_E4,4, Note_D4,4, Note_C4,4, //beauty in
    Note_C4,2, // all
    Note_C4,2, // she
    Note_C4,2, //is
    Note_G4,4, Note_F4,8, Note_E4,-4, //I will be
    Note_C4,2, //brave
    Note_G4,4, Note_F4,8, Note_E4,-4,
    Note_D4,2, Note_E4,4,
    Note_A3,2, Note_C4,4, 
    Note_C4,2, 
    Note_C4,2,
    Note_C4,2,
    Note_E4,8, Note_D4,-4, Note_C4,4, //16
    Note_C4,2, 
    Note_C4,2,
    Note_C4,2,
    Note_G4,4, Note_F4,8, Note_E4,-4, //20
    Note_C4,-4, Note_G4,4, Note_F4,8, Note_E4,-4,
    Note_D4,2, Note_E4,4,
    Note_A3,2, Note_C4,4, //some-
    Note_C4,1, //-how

//Natalie Code
   Rest,4,
    Note_C5,-2, Note_D5,-2, //one step
    Note_E5,1, Note_D5,1, //clo-ser
    Note_D4,-8, Note_F4,-16, Note_D4,4, Note_D4,-8, Note_F4,-16, Note_D4,4, //I have died everday
    Note_G4,-4, Note_F4,-8, Note_D4,-8, Note_B3,-4, //waiting for you
    Note_D4,-8, Note_F4,-16, Note_D4,4, Note_D4,-8, Note_F4,-16, Note_D4,4,
    Note_G4,-4, Note_F4,-8, Note_D4,-8, Note_B3,-8, Note_B3,-16, Note_B3,-16, //I have loved you for a
    Note_E4,-2, Note_D4,-8, //thousand
    Note_G3,-4, Note_B3,-8, Note_B3,-8, Note_B3,-8, Note_C4,-16, Note_B3,-16, //years  I'll love you for a
    Note_E4,-4, Note_D4,-4, //thou-sand
    Note_C4,-4, Note_D4,-4, // more and
    Note_D4,-8, Note_F4,-16, Note_D4,4, Note_D4,-8, Note_F4,-16, Note_D4,4, // all along I believed
    Note_G4,-4, Note_F4,-8, Note_D4,-8, Note_B3,-4, //I would find you
    Note_D4,-8, Note_F4,-16, Note_D4,-8, Note_D4,-16, Note_D4,-8, Note_F4,-16, Note_D4,4, //time has brought your heart to me
    Note_G4,-4, Note_F4,-8, Note_D4,-8, Note_B3,-8, Note_B3,-16, Note_B3,-16, //I have loved you for a
    Note_E4,-2, Note_D4,-8, //thou-sand
    Note_G3,-4, Note_B3,-8, Note_B3,-8, Note_B3,-8, Note_C4,-16, Note_B3,-16, //years. I love you for a
    Note_E4,-4, Note_D4,-4, //thou-sand
    Note_F4,-2, //more.
    Rest,-4, Note_Bb4,-4,
    Note_A4,-4, Note_F4,-4,
    Note_D4,-4, Note_Bb4,-4,
    Note_A4,-4, Note_D4,-4,
    Note_E4,-4, Note_C5,-4,
    Note_Bb4,-4, Note_F4,-4,
    Note_E4,-4, Note_D5,-4,
    Note_C5,-4, Note_E4,-4, //51
    Rest,1,
    Note_B3,-4, Note_C4,-4, // One Step
    Note_D4,-2, //clo-
    Note_C4,-2, //-ser
    Rest,1,
    Note_E4,-4, Note_F4,-4, //one step
    Note_G4,-2, //clo-
    Note_F4,-2, //-ser
    Note_D4,-8, Note_F4,-16, Note_D4,4, Note_D4,-8, Note_F4,-16, Note_D4,4, //I have died everday
    Note_G4,-4, Note_F4,-8, Note_D4,-8, Note_B3,-4, //waiting for you
    Note_D4,-8, Note_F4,-16, Note_D4,4, Note_D4,-8, Note_F4,-16, Note_D4,4, //darling dont be afraid
    Note_G4,-4, Note_F4,-8, Note_D4,-8, Note_B3,-8, Note_B3,-16, Note_B3,-16, //I have loved you for a
    Note_E4,-2, Note_D4,-8, //thou-sand
    Note_G3,-4, Note_B3,-8, Note_B3,-8, Note_B3,-8, Note_C4,-16, Note_B3,-16, //years. I love you for a
    Note_E4,-4, Note_D4,-4, //thou-sand
    Note_C4,-4, Note_D4,-4, //more and
    Note_D4,-8, Note_F4,-16, Note_D4,4, Note_D4,-8, Note_F4,-16, Note_D4,4, // all along I believed
    Note_G4,-4, Note_F4,-8, Note_D4,-8, Note_B3,-4, //I would find you
    Note_D4,-8, Note_F4,-16, Note_D4,-8, Note_D4,-16, Note_D4,-8, Note_F4,-16, Note_D4,4, //time has brought your heart to me
    Note_G4,-4, Note_F4,-8, Note_D4,-8, Note_B3,-8, Note_B3,-16, Note_B3,-16, //I have loved you for a
    Note_E4,-2, Note_D4,-8, //thou-sand
    Note_G3,-4, Note_B3,-8, Note_B3,-8, Note_B3,-8, Note_C4,-16, Note_B3,-16, //years. I love you for a
    
     // Felix Code
    Note_E4,-4, Note_D4,-4, //thou-sand
    Note_C4,-2, //more.
    Rest,-4, Note_E4,-4,
    Note_D4,-4, Note_C4,-4,
    Note_B3,-4, Note_F4,-4,
    Note_E4,-4, Note_D4,-4,
    Note_B3,-4, Note_E4,-4,
    Note_D4,-4, Note_C4,-4,
    Note_B3,-4, Note_D4,-4,
    Note_C4,-4, Note_A3,-4,
    Note_B3,-2,

  } ;

  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  int notes = sizeof(melody) / sizeof(melody[0]) / 2;

  // this calculates duration of wholenote in ms
  int wholenote = (60000 * 4) / tempo;

  int divider = 0, noteDuration = 0;

void setup() {
  // iterate over the notes of the melody.
  // Remember, the array is twice the number of notes (notes + durations)
  for (int thisNote = 0; thisNote < notes * 2; thisNote = thisNote + 2) {

    // calculates the duration of each note
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