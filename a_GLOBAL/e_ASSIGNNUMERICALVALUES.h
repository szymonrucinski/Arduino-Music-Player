#include <SD.h>
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
    if(FileName.indexOf(".WAV")>0 &&  FileName.indexOf("~")<=0) {
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
