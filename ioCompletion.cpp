#include <iostream>
#include <vector>
#include <string>

#include "ioCompletion.h"

using namespace std;

ioCompletion::~ioCompletion()
{
    //type code here
    
}
ioCompletion::ioCompletion(int t) 
    : SimulationEvent(IO_completion, t)
{
    //type code here
    
}
