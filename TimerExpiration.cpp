#include <iostream>
#include <vector>
#include <string>

#include "TimerExpiration.h"

using namespace std;

TimerExpiration::~TimerExpiration()
{
    //type code here
    
}
TimerExpiration::TimerExpiration(int t) 
    : SimulationEvent(Timer_Expiration, t)
{
    //type code here
    
}