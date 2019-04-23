//EVERYTHING THAT NEEDS TO BE SET UP RIGHT BEFORE THE LOOP PROCEDURE
void setup(){
  tmrpcm.speakerPin = 9;  //SPEAKER PIN
tmrpcm.volume(1);
tmrpcm.quality(0);
  tmrpcm.setVolume(6);
  
  Serial.begin(9600);     //SERIAL MONITOR PORT/FREQUENCY
  sdCardFailure();        //Check if SDcard works correctly
  bootingMenu();          //booting menu 
  instruction();          //HOW TO USE
  root = SD.open("/");    //Accessing root directory of SD card
  HowManySongs=SizeOfArray(root, 0);  //Use SizeOfArray to calculate amount of songs
  Serial.println("Initizialization done!"); //WELL DONE!
  
}

//SR

//TABEL WYNIKOW
// 1 1 5 WYMIARY KROLOWEJ!!!
// 1 0 6 Dobry Kompromis pmdz jakoscia a glosnoscia
// 0 0 7 srednia jakosc glosno
//1 0 7 tragiczna jakos glosniej
// 1 1 6 szmery w opor
