#include <iostream>
#include <string>
#include "simulation.h"
using namespace std;

void promptUser(Simulation &DES, int argc, char *argv[])
{
	cout << "Enter number of processes: ";
	cin >> DES.amount;

	// input error handling
	while (DES.amount < 1 || cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "Incorect value, try again: ";
		cin >> DES.amount;
	}
	cout << endl;

	cout << "Select scheduler type" << endl
		 << "1: FCFS" << endl
		 << "2: SJF" << endl
		 << endl
		 << ">> ";
	cin >> DES.selection;

	// input error handling
	while (DES.selection < 1 || DES.selection > 2 || cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "try again: ";
		cin >> DES.selection;
	}
	cout << endl;
}

void handleArgs(Simulation &DES, int argc, char *argv[])
{
	// if 2 arguments are passed
	if (argc == 3)
	{
		DES.amount = atoi(argv[1]);
		DES.selection = atoi(argv[2]);

		// input error handling
		if (DES.amount < 1 || DES.selection < 1 || DES.selection > 2)
		{
			cout << "Incorrect input arguments" << endl;
			promptUser(DES, argc, argv);
		}
	}

	// if 2 arguments are not passed
	else
	{

		// input error handling
		if (argc > 3 || argc == 2)
		{
			cout << "Invalid Arguments passed" << endl;
		}

		promptUser(DES, argc, argv);
	}
}

int main(int argc, char *argv[])
{

	cout << "---------------------------------------" << endl
		 << endl;

	Simulation DES;

	handleArgs(DES, argc, argv);
	DES.setup();

	switch (DES.selection)
	{
	case 1: // FCFS Scheduler
		DES.runFCFS();
		cout << "Generating FCFS Statistics ..." << endl
			 << endl;
		DES.report();
		break;
	case 2: // SJF Scheduler
		DES.runSJF();
		cout << "Generating SJF Statistics ..." << endl
			 << endl;
		DES.report();
		break;
	}

	return 0;
}