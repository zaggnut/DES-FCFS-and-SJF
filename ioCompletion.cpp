#include <iostream>
#include <vector>
#include <string>

#include "iocCompletion.h"

using namespace std;

iocCompletion::~iocCompletion()
{
    //type code here
    
}
iocCompletion::iocCompletion(int t) 
    : SimulationEvent(IO_completion, t)
{
    //type code here
    
}