#include <iostream>
#include <vector>
#include <string>

#include "CPUBurstCompletion.h"

using namespace std;

CPUBurstCompletion::~CPUBurstCompletion()
{
    //type code here
    
}
CPUBurstCompletion::CPUBurstCompletion(int t) 
    : SimulationEvent(CPU_burst_completion, t)
{
    //type code here
    
}