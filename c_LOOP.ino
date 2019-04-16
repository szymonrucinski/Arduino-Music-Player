
void loop(){  

  if(Serial.available()){   
    mychar = Serial.read();
    
    if(currentSong>HowManySongs)
    HowManySongs=1;
    
   inputReact( mychar, HowManySongs,currentSong);

}
}
