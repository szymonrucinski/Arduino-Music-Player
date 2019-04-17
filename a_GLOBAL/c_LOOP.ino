//THE ONE WHO ALWAYS STAYS IN THE LIMELIGHT
void loop(){ 

    mychar = Serial.read(); //GETTING CHAR FROM KEYBOARD
    if(mychar=='n' || mychar=='r' || mychar =='p'){
if(mychar=='n')currentSong++; //IF YOU PRESS N LIKE NEXT SONG, THE COUNTER INCREMENTS
   
 if(currentSong>HowManySongs) //IF CURRENT SONG IS GREATER THAN THE AMOUNT OF SONG ON THE SD CARD, THAT MEANS THAT SOMETHING GOES HORRIBLY WRONG
    currentSong=1;        
    
Serial.print("Now Playing:");         //USED
Serial.print(currentSong);              //FOR
    Serial.print(".wav");             //TESTS
    Serial.print("\n");             //TESTS


   inputReact( mychar, HowManySongs,currentSong);   //MAGIC HAPPENS HERE
  }
}
//SR
