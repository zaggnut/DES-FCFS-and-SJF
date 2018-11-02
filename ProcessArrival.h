#ifndef PROCESSARRIVAL_H
#define PROCESSARRIVAL_H

#include <string>
#include <vector>
#include <iostream>
#include "SimulationEvent.h"

using namespace std;

//contains process information, like 
class ProcessArrival: public SimulationEvent 
{
    public:
        ~ProcessArrival();
        ProcessArrival(int t);
    
};

#endif //PROCESSARRIVAL_H