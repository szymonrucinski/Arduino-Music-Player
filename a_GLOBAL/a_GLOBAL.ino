//AUDIO PLAYER PROJECT:
//TEAM MEMBERS
//SZYMON RUCINSKI
//ANNA PRECZYNSKA
//IGA WOJCIK

//Libraries
#include <SPI.h>
#include <SD.h>                                        
#include <TMRpcm.h>  
#include <Wire.h>
#include <LiquidCrystal_I2C.h> 
#include <Wire.h>
#include<SoftwareSerial.h>                               
#include "d_REACTIONTOINPUT.h"
#include "f_SDCARDFAILURE.h"
#include "i_SIZEOFARRAY.h"
#include "e_ASSIGNNUMERICALVALUES.h"
LiquidCrystal_I2C lcd(0x27, 16, 2);  // Ustawienie adresu ukladu na 0x27



//classes and data types
#define TxD 3
#define RxD 2 
SoftwareSerial bluetoothSerial(TxD,RxD); 
TMRpcm tmrpcm;                    // create an object for use in this sketch
char mychar;                      //character used for audio playing
const int SD_ChipSelectPin = 4;   //SD_CARD PIN
File root;                        //file root required for SD CARD READOUT
File FileMetadata;
int HowManySongs;                 //Variable that stores number of ".wav" songs present on SD card
int currentSong=0;               //there is always a song with "1.wav" on the sd card
int indexCounter=0;
int *array_pointer;
int loudnessLevel=6;
bool initialAudioSettings = false;

 
