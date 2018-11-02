#ifndef IOCOMPLETION_H
#define IOCOMPLETION_H

#include <string>
#include <vector>
#include <iostream>
#include "SimulationEvent.h"

using namespace std;

//contains process information, like 
class ioCompletion: public SimulationEvent 
{
    public:
        ~ioCompletion();
        ioCompletion(int t);
    
};

#endif //IOCOMPLETION_H