#include <Tone.h> 
Tone notePlayer[3];
void setup() {
  notePlayer[0].begin(13);    //OSC 1 - OSC 1 OUTPUT PIN 3
  notePlayer[1].begin(5);    //OSC 2 - OSC 2 OUTPUT PIN 5
}

// the loop function runs over and over again forever
void loop() {
  notePlayer[0].play(NOTE_C4);
  //notePlayer[1].play(NOTE_G5);
  delay(1000);
  notePlayer[1].stop();
  delay(1000);  
  notePlayer[0].stop();     
  notePlayer[1].play(NOTE_G5); 
  delay(1000);             // wait for a second
}
