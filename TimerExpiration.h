#ifndef TIMEREXPIRATION_H
#define TIMEREXPIRATION_H

#include <string>
#include <vector>
#include <iostream>
#include "SimulationEvent.h"

using namespace std;

class TimerExpiration: public SimulationEvent 
{
    public:
        ~TimerExpiration();
        TimerExpiration(int t);
    
};

#endif //TIMEREXPIRATION_H