#ifndef CPUBURSTCOMPLETION_H
#define CPUBURSTCOMPLETION_H
#include <string>
#include <vector>
#include <iostream>
#include "SimulationEvent.h"

using namespace std;

class CPUBurstCompletion: public SimulationEvent 
{
    public:
        ~CPUBurstCompletion();
        CPUBurstCompletion(int t);
    
};

#endif //CPUBURSTCOMPLETION_H