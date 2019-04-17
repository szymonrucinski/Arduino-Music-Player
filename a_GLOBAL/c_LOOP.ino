
void loop(){  
  
int listOfSongNumbers[HowManySongs];

  if(Serial.available())  
    mychar = Serial.read();
    
    if(currentSong>HowManySongs)
    HowManySongs=1; //Serial.println(currentSong); Serial.println("test-currentSongs");

    if(mychar=='n')
    currentSong++;

    if(mychar=='n')
    
   inputReact( mychar, HowManySongs,currentSong);

}
