//EVERYTHING THAT NEEDS TO BE SET UP RIGHT BEFORE THE LOOP PROCEDURE
void setup(){
  
//DEFINING PINS AND SOUND SETTINGS
  bluetoothSerial.begin(9600);

if(initialAudioSettings==false)
{
tmrpcm.speakerPin = 9;  //SPEAKER PIN
tmrpcm.volume(1);
tmrpcm.quality(0);
tmrpcm.setVolume(6);
initialAudioSettings=true;
}

int number;
bluetoothSerial.begin(9600);
Serial.begin(9600);     //SERIAL MONITOR PORT/FREQUENCY
sdCardFailure(SD_ChipSelectPin);        //Check if SDcard works correctly

//PUT IT INTO THE FUNCTION
root = SD.open("/");    //Accessing root directory of SD card
HowManySongs=SizeOfArray(root,0);  //Use SizeOfArray to calculate amount of songs
root.close();

root = SD.open("/");
//int* songNames=new int[HowManySongs]; //table of songNames containing song numbers
array_pointer =(AssignNumericalValues(HowManySongs,root, 0));
//Serial.println(*array_pointer);

root.close();
///////////////////////////////////////////////////////////////////

  Serial.println("Initizialization done!"); //WELL DONE!
  
}

//SR
