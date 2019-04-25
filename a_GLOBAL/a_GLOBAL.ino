//AUDIO PLAYER PROJECT:
//TEAM MEMBERS
//SZYMON RUCINSKI
//ANNA PRECZYNSKA
//IGA WOJCIK

//Libraries
#include <SPI.h>
#include <SD.h>                                         // SD library
#include <TMRpcm.h>                                     //Audio library

//classes and data types
TMRpcm tmrpcm;                    // create an object for use in this sketch
char mychar;                      //character used for audio playing
const int SD_ChipSelectPin = 4;   //SD_CARD PIN
File root;                        //file root required for SD CARD READOUT
int HowManySongs;                 //Variable that stores number of ".wav" songs present on SD card
int currentSong=0;               //there is always a song with "1.wav" on the sd card
int indexCounter=0;

//FUNCTIONS
void bootingMenu();                        //Function that runs while booting up the device
void sdCardFailure();                      //Sd card reader was not initialized properly
int SizeOfArray(File dir,int numTabs);    //Calculate amount of ".wav" stored on the sd card, used in conjunction with AssignNumerical values
void inputReact(char mychar, int HowManySongs, int currentSongs); //Reaction to serial.read();
void calculateSongsCreateArray(int songsName);

int *array_pointer;

 //Function, do not even DARE to ask why it's here XD
 //File on the sd card have names, those names are stored as a string
 //Array of strings uses a lot of memory and in some cases strings are incomplete
 //We get files like "15.w" when it should look like "15.wav"
 
 int* AssignNumericalValues (int HowManySongs,File dir, int numTabs){
int StringToNumber;
int* songNames=new int [HowManySongs];

 int k=0;
       Serial.print("Assign numerical values");
  while (true) {

    File entry =  dir.openNextFile();
    if (! entry) {
      // no more files
      break;
    }
    for (uint8_t i = 0; i < numTabs; i++) {
      Serial.print('\t');
    }
   // Serial.print(entry.name());
    String FileName = entry.name();
    if(FileName.indexOf(".WAV")>0) {
      StringToNumber = FileName.toInt();

      songNames[k]=StringToNumber;
                               Serial.print("n/");

                         Serial.print(songNames[k]);

      k++;

      }
    entry.close();
  }
    return songNames;
}
