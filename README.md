# DES-FCFS-and-SJF
This is a discrete event simulation of First Come First Serve and Shortest Job First (non-preemptive) Scheduling algorithms



right now i need to create a process class that contains a bunch of info regarding a process created from an Process Arrival Event.

the priority_queue will contain pointers to SimulationEvent Objects.  But the pointers will actually point to child objects.
because the < needs to be overloaded again to handle comparsion of POINTERS to SimulationEvents.  this is done with Functors (i think).
then we create an event priority queue using that funcntor.

at the start of the program, the event priority queue is filled up with a set # of process Arrival events.  the # of Process Arrival events
is equal to the input # used as the argv parameter. some simulation data is declared and initialized too.

Then the structure of the program is a while loop that runs until either the event queue is empty or the timer is up "5 min"
inside the while loop is a swtich statement that handles whatever event was popped off the Event priority queue.

from there idk.  depends on what the instructions are for handling in the assignment.  handling could include pushing more events into
the event priority queue.  or messing with the process objects. 

****a ready queue is needed to be creadted.  In this assignment we are doing SJF and FCFS scheduling.  
==> FCFS acts like a regular queue
==> SJF acts like a priority queue just like the Event priority queue.
