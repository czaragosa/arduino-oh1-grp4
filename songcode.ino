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

// natalie code

    Note_G4,-2,
    Note_D5,4, Note_C5,4, Note_B4,4,
    Note_A4,2, Note_B4,4,
    Note_FS4,2, Note_G4,4, // line 3, end repeat
    Note_G4,-2,  
   
  };

  // sizeof gives the number of bytes, each int value is composed of two bytes (16 bits)
  // there are two values per note (pitch and duration), so for each note there are four bytes
  int notes = sizeof(melody) / sizeof(melody[0]) / 2;

  // this calculates duration of wholenote in ms
  int wholenote = (60000 * 4) / tempo;

  int divider = 0, noteDuration = 0;

void setup() {
  

  


void loop() {

}










