#include <iostream>
#include <vector>
#include <string>

#include "ProcessArrival.h"

using namespace std;

ProcessArrival::~ProcessArrival()
{
    //type code here
    
}
ProcessArrival::ProcessArrival(int t) 
    : SimulationEvent(process_arrival, t)
{
    //type code here
    
}