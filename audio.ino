const uint16_t gameOver[] PROGMEM = {
  500,100, 300,100, 100,100, 300,100, 500,100, 50,160,
  TONES_END };

 
 /*
 * lose health
 */
void soundBad(){
  sound.tone(100, 100);
}

 /*
 * gain health
 */
void soundGood(){
  sound.tone(900, 100);
}


/*
 * game over
 */
void soundGameOver(){
  sound.tones(gameOver);
  while (sound.playing()) { }
  sound.tones(gameOver);
  while (sound.playing()) { }
  delay(1000);
}
