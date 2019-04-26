//EVERYTHING THAT NEEDS TO BE SET UP RIGHT BEFORE THE LOOP PROCEDURE
void setup(){
  
//DEFINING PINS AND SOUND SETTINGS
tmrpcm.speakerPin = 9;  //SPEAKER PIN
tmrpcm.volume(1);
tmrpcm.quality(0);
tmrpcm.setVolume(6);
int number;

Serial.begin(9600);     //SERIAL MONITOR PORT/FREQUENCY
sdCardFailure();        //Check if SDcard works correctly
//bootingMenu();          //booting menu 

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

Serial.println("");
//testing 1.2.3...
  for(int i=0;i<HowManySongs;i++)
  {
      Serial.println(*(array_pointer+i)); //WELL DONE!
    }
  
  Serial.println("Initizialization done!"); //WELL DONE!
  
}

//SR

//TABEL WYNIKOW
// 1 1 5 WYMIARY KROLOWEJ!!!
// 1 0 6 Dobry Kompromis pmdz jakoscia a glosnoscia
// 0 0 7 srednia jakosc glosno
//1 0 7 tragiczna jakos glosniej
// 1 1 6 szmery w opor
