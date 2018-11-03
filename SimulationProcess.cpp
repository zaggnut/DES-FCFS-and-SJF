#include <vector>
#include <string>
#include <iomanip>
#include "SimulationProcess.h"

using namespace std;


SimulationProcess::~SimulationProcess()
{

//type code here    

}

SimulationProcess::SimulationProcess(int id)
{
    processID = id;
    startTime = 0;
    totalCPUDuration = 0;
    remainingCPUDuration = 0;
    averageCPUBurstLength = 0;
    nextCPUBurstLength = 0;
    priority = 0;
    status = "Status Not Set!!!";
}