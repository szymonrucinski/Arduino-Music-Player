void inputReact(char mychar, int HowManySongs, int currentSong){
  currentSong =4;
   char songToBePlayed = char (currentSong);
   Serial.println(songToBePlayed);


int a=currentSong;
char b[6];
String str;
str=String(a);
str.toCharArray(b,1);







   
  
   if(mychar == 'p' && tmrpcm.isPlaying()){ //send the letter p over the serial monitor to start playback
      tmrpcm.pause();
    } 
    else if(mychar == 'p'){ //send the letter p over the serial monitor to start playback
      tmrpcm.play("Filename.wav");
    } 
    else if(mychar == 'n'){ //send the letter p over the serial monitor to start playback
      tmrpcm.play("1.wav");
    } 
    else if(mychar == 'a'){
      tmrpcm.play(songToBePlayed+".wav");
    }
    else if(mychar == 'b'){ //send the letter p over the serial monitor to start playback
      tmrpcm.play("5.wav");
    }
    else if(mychar == 'n'){ //send the letter p over the serial monitor to start playback
      tmrpcm.play("6.wav");
    }
    else if(mychar == 'i'){ //send the letter p over the serial monitor to start playback
     instruction();
    }
}
