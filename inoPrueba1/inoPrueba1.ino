#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1); // RX, TX
int a = 0;
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  
}

void loop() { // run over and over

  Serial.print("data: ");
  Serial.println(a++);
  delay(250);
  if(a>1023)
  {
    a=0;
    }
  
}
