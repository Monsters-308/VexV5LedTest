/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\sgilbert                                         */
/*    Created:      Mon Oct 04 2021                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

uint8_t led_state = 'a'; // to make life easy we will send a char for the led state

int sendSerialTask(){
    // enable port 18 as generic serial port
    vexGenericSerialEnable( vex::PORT18, 0 );
    // change baud rate, default is 230k
    vexGenericSerialBaudrate( vex::PORT18, 115200 );
    // allow vexos to reconfigure the port
    // the port will remain as a generic serial port until the brain is power cycled
    this_thread::sleep_for(10);

    // buffer for tx data
    uint8_t txbuf[1];

    uint8_t last_state = 'a';
    while(1) {
      // check if the led state has changed
      if(last_state != led_state){
        vexGenericSerialTransmit( vex::PORT20, (uint8_t *)txbuf, 1  );
      }
      last_state = led_state;

      this_thread::sleep_for(100);
    }
  
    return(0);
}


int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  vex::thread rxThread( sendSerialTask );

  int x = 0;
  while(true){


    // just check fo the limits
    if(led_state == 'z'){
      led_state = 'a';
    }
    // every 1 second or 10x100ms increment the led state
    if(x++ % 10 == 0){
      led_state +=1; // increment the led_state
    }

    this_thread::sleep_for(100);
  }
}
