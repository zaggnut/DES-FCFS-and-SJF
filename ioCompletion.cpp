#include <iostream>
#include <vector>
#include <string>

#include "ioCompletion.h"

using namespace std;

ioCompletion::~ioCompletion()
{
    //type code here
    
}
ioCompletion::ioCompletion(int t, SimulationProcess* proc) 
    : SimulationEvent(IO_completion, t)
{
    process = proc;
    //type code here
    
}
