//AUDIO PLAYER PROJECT:

//Libraries
#include <SD.h>                                        
#include <TMRpcm.h>  
#include <LiquidCrystal_I2C.h>
#include <SoftwareSerial.h>
#include "d_REACTIONTOINPUT.h"
#include "f_SDCARDFAILURE.h"
#include "i_SIZEOFARRAY.h"
#include "e_ASSIGNNUMERICALVALUES.h"

//classes and data types
//AltSoftSerial altSerial;
TMRpcm tmrpcm;                    // create an object for use in this sketch
//SoftwareSerial mySerial (3, 2); // RX, TX
LiquidCrystal_I2C lcd(0x27,20,4);
  SoftwareSerial mySerial (3, 2);


int HowManySongs;                 //Variable that stores number of ".wav" songs present on SD card
int currentSong=0;               //there is always a song with "1.wav" on the sd card
int indexCounter=0;
int *array_pointer;
int loudnessLevel=6;
bool initialAudioSettings = false;
