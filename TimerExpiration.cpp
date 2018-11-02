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
    : SimulationEvent(Timer_expiration, t)
{
    //type code here
    
}