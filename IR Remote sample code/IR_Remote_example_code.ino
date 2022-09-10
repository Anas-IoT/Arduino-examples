#include <IRremote.h>
const byte IR_RECEIVE_PIN = 6;     // Reciver pin
int Remotevalue;

void setup()
{
  Serial.begin(9600);
  Serial.println("IR Receive test");
  IrReceiver.begin(IR_RECEIVE_PIN, ENABLE_LED_FEEDBACK);
}

void loop()
{
   
  if (IrReceiver.decode())
  {
     Remotevalue = IrReceiver.decodedIRData.command ;
     IrReceiver.resume();
  }

   Serial.println(Remotevalue);
}
