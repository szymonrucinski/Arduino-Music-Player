void bootingMenu(){
  tmrpcm.setVolume(2);
tmrpcm.quality(1);
//tmrpcm.play("Intro.wav");
Serial.println("|||||||||||||||||||||||||||||"); 
Serial.println("|| WELCOME TO MUSIC PLAYER ||"); 
Serial.println("|||||||||||||||||||||||||||||"); //the sound file "music" will play each time the arduino powers up, or is reset
}
