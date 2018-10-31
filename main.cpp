/*
Authors: Shane Laskowski & 
Date Created: 10/30/2018
Date Modified: 10/30/2018
*/

#include <iostream>
#include <vector>
#include <string>
#include <queue> //holds the priority_queue class, need to implement the < for event class (1ms timestamp is highest priority?)

#include "SimulationEvent.h"
#include "ProcessArrival.h"
using namespace std;

//one of the arguments to main is the number of initial process_arrival events to be added to the event priority_queue
int main(int argc, char *argv[])
{
    SimulationEvent myEvent1(process_arrival, 5);
    SimulationEvent myEvent2(process_arrival, 6);

    if(myEvent1 < myEvent2)
        cout << "myevent1 is less than myEvent2" << endl;
    else cout << "myevent1 greater than myEvent2" << endl;
    
    //cout << myEvent1.eventName << endl; //remember, eventName is a enum type, its data is similar to integer

    ProcessArrival process1(5);
    process1.print();

    return 0;
}
