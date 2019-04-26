//THE ONE WHO ALWAYS STAYS IN THE LIMELIGHT
void loop(){ 
  
    mychar = Serial.read(); //GETTING CHAR FROM KEYBOARD
    if(mychar=='n' || mychar=='r' || mychar =='p'){

 if(indexCounter>=HowManySongs)
    indexCounter=0; currentSong=*array_pointer; 
      
      if(mychar=='n'){
      currentSong=*(array_pointer+indexCounter);
              indexCounter++;
      Serial.println(indexCounter);
            Serial.println(currentSong);

      
} //IF YOU PRESS N LIKE NEXT SONG, THE COUNTER INCREMENTS

Serial.print("Now Playing:");         //USED
Serial.print(currentSong);              //FOR
    Serial.print(".wav");             //TESTS
    Serial.print("\n");             //TESTS


   inputReact( mychar, HowManySongs,currentSong);   //MAGIC HAPPENS HERE
  }
}
//SR
