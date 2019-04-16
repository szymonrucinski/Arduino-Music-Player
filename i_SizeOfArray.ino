int SizeOfArray(File dir, int numTabs) {
  int k=0;
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
      k++;
      Serial.print(FileName+"\n");
      
      }

    
    entry.close();
  }
        Serial.print(k);
        return k;

}
