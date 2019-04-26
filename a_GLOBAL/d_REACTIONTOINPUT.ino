void inputReact(char mychar, int HowManySongs, int currentSong){

//What if user wants to play song no.5 but it does not exitst
//What ig he plays next

//p for Play and Pause
//n for Next
//r for remove

 //converting from into to array of character that can be send as an argument to xxx.play() etc.
 String fileFormat = ".wav";
 String song = String(currentSong)+fileFormat;
char buff[7];
song.toCharArray(buff, 7);
char *p = buff;
//END

   if(mychar == 'p' && tmrpcm.isPlaying()){
      tmrpcm.pause();   //PAUSE SONG
    } 
    else if(mychar == 'p'){ 
      tmrpcm.play(buff);      //PLAY SONG
    } 
    else if(mychar == 'n'){
      tmrpcm.play(buff);    //PLAY NEXT SONG
        } 
    else if(mychar == 'r'){
      tmrpcm.disable();
  Serial.println("Remove file? (y/n)");
   SD.remove(buff);
   setup();
   loop();
  //REMOVE SONG
    }
}
//SR
