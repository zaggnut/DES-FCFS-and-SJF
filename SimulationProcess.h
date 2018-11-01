#ifndef SIMULATIONPROCESS_H
#define SIMULATIONPROCESS_H

#include <iostream>
#include <string>

using namespace std;

class SimulationProcess{
	
	public:
	//**********There may need to be more data members
	//////////data members//////////
	
	//A unique process identifier by which the process may be referred to by other processes.
	int processID;
	
	//The start time for processes will be randomly distributed over a five-minute time span.
	int startTime; //should this be float ?
	
	// The total duration of a process will be randomly determined between 1 second and 1 minute. 
	//(This includes the total of all CPU burst times, but no waiting times. ) This time will be 
	//determined as each process is initially created.
	int totalCPUDuration;
	
	// The remained CPU duration of the process. Whenever a process completes its CPU burst,
	//the burst time should be subtracted from the remaining CPU duration. When the remaining CPU 
	//duration reacheszero, the process terminates.
	int remainingCPUDuration;
	
	
	//The average CPU burst length is an process attribute determined at the creation time. It
	//is randomly chosen between 5 ms to 100 ms. It is used to determine the length of next CPU burst 
	//using a distribution function matching that of Figure 5.2 from the textbook
	int averageCPUBurstLength;
	
	/*
	It will be randomly determined based on the average CPU burst length. Next CPU burst
	time is determined when a process is moved into the ready queue, either the first time after
	initial process arrival, orafter completing an I/O burst. A function “CPUBurstRandom()” is provided 
	in the assign3.zip file to generate random CPU burst length. This function takes a parameter that is 
	the average CPU burst length, and return a random burstlength in ms. To use this function, unzip the
	zip file, add the included “random.h” and “random.c” to the files of yourprogram, and include the header “random.h”.
	*/
	int nextCPUBurstLength;
	
	//I/O burst times will be randomly determined between 30 to 100 ms. These times will be generated as
	//each process completes a CPU burst and moves to the I/O queue.
	int ioBurstTime;
	
	//The process priority is used by the scheduler to decide which process should be running next in
	//priority basedscheduling. The priority is usually represented by an in integer.
	int priority;
	
	//The status of a process can be one of ready, running, waiting or terminated.
	string status; 
	
	//////////function members//////////
	
	
};


#endif //SIMULATIONPROCESS_H