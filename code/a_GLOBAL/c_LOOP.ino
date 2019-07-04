//THE ONE WHO ALWAYS STAYS IN THE LIMELIGHT
#include <SoftwareSerial.h>

void loop(){ 
  
char mychar;                      //character used for audio playing
if(mySerial.available()>0)mychar =  mySerial.read();  //GETTING CHAR FROM KEYBOARD

// mychar=Serial.read();

    if(mychar=='n' || mychar=='r' || mychar =='p' ||mychar =='q' || mychar =='l'){

 if(indexCounter>=HowManySongs)
    indexCounter=0; currentSong=*array_pointer; 
      
      if(mychar=='n'){
        lcd.backlight();
      currentSong=*(array_pointer+indexCounter);
              indexCounter++;
      Serial.println(indexCounter);
            Serial.println(currentSong);

      
}
//IF YOU PRESS N LIKE NEXT SONG, THE COUNTER INCREMENTS


   inputReact( mychar, HowManySongs,&currentSong,tmrpcm,&loudnessLevel,lcd);   //MAGIC HAPPENS HERE
  }
}
//SR
