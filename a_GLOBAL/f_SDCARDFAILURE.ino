 void sdCardFailure(){
  if (!SD.begin(SD_ChipSelectPin)) {  // see if the card is present and can be initialized:
    Serial.println("SD fail");  
    return;   // nothing can be done
  }
  
  };
  //SR
