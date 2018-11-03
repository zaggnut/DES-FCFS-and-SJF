#ifndef IOCOMPLETION_H
#define IOCOMPLETION_H

#include <string>
#include <vector>
#include <iostream>
#include "SimulationEvent.h"
#include "SimulationProcess.h"

using namespace std;

//contains process information, like 
class ioCompletion: public SimulationEvent 
{
    public:
        ~ioCompletion();
        ioCompletion(int t, SimulationProcess* proc);
        SimulationProcess* process;
    
};

#endif //IOCOMPLETION_H