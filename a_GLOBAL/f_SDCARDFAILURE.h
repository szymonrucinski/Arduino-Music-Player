#ifndef _f_SD_CARD_FAILURE_H
#define _f_SD_CARD_FAILURE_H
#include <SD.h>


 void sdCardFailure(const int SD_ChipSelectPin){
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
    Serial.println("SD fail");  
    return;   // nothing can be done
  }
  
  };
  //SR

#endif