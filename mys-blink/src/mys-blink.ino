
// Include your libraries at the top
#include <MySensors.h>

#define CHILD_ID (3)


#ifndef LED_BUILTIN
  #define LED_BUILTIN PC13
#endif


void before()
{
    // Optional method - for initialisations that needs to take place before MySensors transport has been setup (eg: SPI devices).
}

void setup()
{
    // Called once at startup, usually used to initialize sensors.
  pinMode(LED_BUILTIN, OUTPUT);
}

void presentation()  
{ 
  sendSketchInfo("Name of my sensor node", "1.0");
  present(CHILD_ID, S_WHATEVER);
}

void loop()
{
    // This will be called continuously after setup.

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for a second
  delay(500);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
   // wait for a second
  delay(500);

}
