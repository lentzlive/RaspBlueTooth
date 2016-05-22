#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); // RX | TX

void setup()
{
  pinMode(9, OUTPUT);  // this pin will pull the HC-05 pin 34 (key pin) HIGH to switch module to AT mode
  digitalWrite(9, HIGH);
  Serial.begin(9600);
  //Serial.println("Enter AT commands:");
  BTSerial.begin(9600);  // HC-05 default speed in AT command more
  Serial.println("Setup End");
   
}

void loop()
{

  char ch;

  // Keep reading from HC-05 and send to Arduino Serial Monitor
  if(BTSerial.available())
  {
    ch = BTSerial.read();
        Serial.print(ch);  
    //sBTSerial.write(ch);
   // BTSerial.write("Hello World");
while(true)
{
  delay(500);  
   BTSerial.write("Hello World");
   delay(500);  
    BTSerial.write("Hello World2");
       delay(500);  
    BTSerial.write("AAANN nnnn");
}

  }

  
}
