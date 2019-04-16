void  removeFiles(String filename)
{
  Serial.println("Remove file? (y/n)");
  if(mychar=Serial.read() == 'y')
  SD.remove(filename);
}
