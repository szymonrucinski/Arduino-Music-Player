void setup(){

  tmrpcm.speakerPin = 9;  //SPEAKER PIN
  Serial.begin(9600);     //SERIAL MONITOR PORT/FREQUENCY
  sdCardFailure();        //Check if SDcard works correctly
  bootingMenu();          //booting menu 
  instruction();          //HOW TO USE
  
  root = SD.open("/");    //Accessing root directory of SD card
 
  HowManySongs=SizeOfArray(root, 0);  //Use SizeOfArray to calculate amount of songs
  int songNames[HowManySongs];        //Lets create an array of song titles

  for(int i =0; i<HowManySongs; i++)
  {
    songNames[HowManySongs]=i+1;
      //Serial.println(songNames[HowManySongs]+"/n");

    
    }
   
  Serial.println("done!");
  
}
