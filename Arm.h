#ifndef Arm_h
#define Arm_h

#include "Arduino.h"
#include "libs/Joint.h"

class Arm{
  	
  private:
  	Joint[] joints;
  	uint16_t tick_time;

  public:
    void moveTo(String);
}

#endif