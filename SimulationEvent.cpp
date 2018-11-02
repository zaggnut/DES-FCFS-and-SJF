#include <string>
#include <vector>
#include <iomanip>
#include <iostream>

#include "SimulationEvent.h"

using namespace std;

//destructor
SimulationEvent::~SimulationEvent() 
{
  //cout << "desconstructor called" << endl;
  //type here  
}

//constuctors (no default constructor, all events must have a type)
SimulationEvent::SimulationEvent(eventType e, int t) 
{
    //cout << "eventType constuctor has been called" << endl;
    eventName = e;
    TimeStampMS = t;
}

//Operator overloading of <
bool SimulationEvent::operator <(const SimulationEvent& e) 
{
	//this violates a golden rule of operator overloading, overloading "<" but implementing with ">"
    return (this->TimeStampMS > e.TimeStampMS); //remember, the lower the timestamp, the higher the priority.
}

void SimulationEvent::print()
{
    cout << "The eventName is " << eventName << endl; //remember that eventName is a enum, similar to integer type
    cout << "the Time Stamp in miliseconds is " << TimeStampMS << endl;
}
