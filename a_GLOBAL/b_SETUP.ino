//EVERYTHING THAT NEEDS TO BE SET UP RIGHT BEFORE THE LOOP PROCEDURE
void setup(){
  tmrpcm.speakerPin = 9;  //SPEAKER PIN
  Serial.begin(9600);     //SERIAL MONITOR PORT/FREQUENCY
  sdCardFailure();        //Check if SDcard works correctly
  bootingMenu();          //booting menu 
  instruction();          //HOW TO USE
  root = SD.open("/");    //Accessing root directory of SD card
  HowManySongs=SizeOfArray(root, 0);  //Use SizeOfArray to calculate amount of songs
  Serial.println("Initizialization done!"); //WELL DONE!
  
}

//SR
