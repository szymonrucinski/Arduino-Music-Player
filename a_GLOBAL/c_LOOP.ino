//THE ONE WHO ALWAYS STAYS IN THE LIMELIGHT
void loop(){ 
  
    mychar =  bluetoothSerial.read();; //GETTING CHAR FROM KEYBOARD
    if(mychar=='n' || mychar=='r' || mychar =='p' ||mychar =='q' || mychar =='l'){

 if(indexCounter>=HowManySongs)
    indexCounter=0; currentSong=*array_pointer; 
      
      if(mychar=='n'){
      currentSong=*(array_pointer+indexCounter);
              indexCounter++;
      Serial.println(indexCounter);
            Serial.println(currentSong);

      
}
//IF YOU PRESS N LIKE NEXT SONG, THE COUNTER INCREMENTS


   inputReact( mychar, HowManySongs,&currentSong,tmrpcm,&loudnessLevel);   //MAGIC HAPPENS HERE
  }
}
//SR
