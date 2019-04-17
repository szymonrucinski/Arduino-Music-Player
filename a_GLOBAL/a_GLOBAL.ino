//Libraries
#include <SPI.h>
#include <SD.h>                        // SD library
#include <TMRpcm.h>                   //Audio library

//classes and data types
TMRpcm tmrpcm;                    // create an object for use in this sketch
char mychar;                      //character used for audio playing
const int SD_ChipSelectPin = 4;   //SD_CARD PIN
File root;

 int HowManySongs;
int currentSong =1;


//FUNCTIONS
 void inputReact(char inputCharacter);
 void bootingMenu();
 void sdCardFailure();
 void instruction();

 int SizeOfArray(File dir, int numTabs);
 void inputReact(char mychar, int HowManySongs, int currentSongs);
