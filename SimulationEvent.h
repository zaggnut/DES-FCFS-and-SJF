#ifndef SIMULATIONEVENT_H
#define SIMULATIONEVENT_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

enum eventType {process_arrival, CPU_Burst_completion, IO_completion, Timer_Expiration};

class SimulationEvent {
  
public:
        int TimeStampMS; //determines the current time of the whole simulation, in miliseconds.  used as priority
        eventType eventName; // the type of event
        
        /*
        operator overloading of <
        Note that because its a member function it only requires 1 argument/parameter 
        (the operation acts on the calling object and the argument/parameter)
        Remember to use the "this" keyword to reference the calling object
        */
        bool operator <(const SimulationEvent& e);
        
        //desctructors and constructors
        //***Note there is no default constructor, it is not desired
        ~SimulationEvent();
        SimulationEvent(eventType e, int t);
       
        void print(); 
        
};

#endif //SIMULATIONEVENT_H