void  removeFiles(char filename)
{    mychar=Serial.read();
  Serial.println("Remove file? (y/n)");
  if(mychar== 'y')
  SD.remove(filename);
  else Serial.println("Failure");Serial.println(filename);
}
//SR
