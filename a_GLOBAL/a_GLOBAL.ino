//AUDIO PLAYER PROJECT:
//TEAM MEMBERS
//SZYMON RUCINSKI
//ANNA PRECZYNSKA
//IGA WOJCIK


//Libraries
#include <SPI.h>
#include <SD.h>                        // SD library
#include <TMRpcm.h>                   //Audio library

//classes and data types
TMRpcm tmrpcm;                    // create an object for use in this sketch
char mychar;                      //character used for audio playing
const int SD_ChipSelectPin = 4;   //SD_CARD PIN
File root;                        //file root required for SD CARD READOUT
int HowManySongs;                 //Variable that stores number of ".wav" songs present on SD card
int currentSong =1;               //there is always a song with "1.wav" on the sd card


//FUNCTIONS
 void bootingMenu();                        //Function that runs while booting
 void sdCardFailure();                      //Sd card reader was not initialized properly
 void instruction();                        //User's manual
 int SizeOfArray(File dir, int numTabs);    //Calculate amount of ".wav" stored on the sd card, used in conjunction with int HowManySongs
 void inputReact(char mychar, int HowManySongs, int currentSongs); //Reaction to serial.read();
