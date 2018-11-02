/*
Authors: Shane Laskowski & Michael Lingo
Date Created: 10/30/2018
Date Modified: 11/2/2018
*/
#include <iostream>
#include <vector>
#include <string>

//holds the priority_queue class, need to implement the < for 
//event class (lowest timestamp should be highest priority)
#include <queue>            

#include "SimulationEvent.h"    //parent class of all events
#include "ProcessArrival.h"     //child class of SimulationEvent class
#include "ioCompletion.h"       //child class of SimulationEvent class
#include "CPUBurstCompletion.h" //child class of SimulationEvent class
#include "TimerExpiration.h"    //child class of SimulationEvent class

// class of a process that contains process information, 
//used for statical data and to do simulation
#include "SimulationProcess.h"  

using namespace std;

//note std::binary_function is depricated in c++11, what ever...
struct eventPtrComparison : public binary_function<SimulationEvent*, SimulationEvent*, bool> 
{
    //i really don't know what operator()(...) const is doing
    bool operator()(const SimulationEvent* leftHandSide, const SimulationEvent* rightHandSide) const
    {
        return leftHandSide < rightHandSide; //the < overload for SimulationEvents should work here
    }
};

//argv[1] should be the number of initial process_arrival events to be added to 
//the event priority_queue (and number of SimulationProcesses)
int main(int argc, char *argv[])
{
    ///////////////do initializing stuff////////////////////////////////////////////////////////////
    
    int numberOfprocesses = stoi(argv[1]); //the 1st argument, not main.cpp, _should_ be a string of a #.
    
    //create process objects
    vector <SimulationProcess> processObjects;
   
   
    for(int i = 0; i < numberOfprocesses; i++)
    {
        processObjects.push_back(SimulationProcess()); //with processObjects(), dont forget the () :)
    }
    
    
    //good read -> https://www.technical-recipes.com/2011/priority-queues-and-min-priority-queues-in-c/
    priority_queue<SimulationEvent*, vector<SimulationEvent*>, eventPtrComparison> eventPriorityQueue;
    
    
    
    ///////////////do event handling + simulations + update info statistical//////////////////////////////
    
    
    
    ///////////////print out statistical data////////////////////////////////////////////////////////////
    
    
    

    return (0);
}
