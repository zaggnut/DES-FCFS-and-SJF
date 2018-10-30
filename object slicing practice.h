#include <iostream>
#include <vector>
using namespace std;

class dog {
    
public:
    string color = "";
    int numPaws = 4;
    
    void printDog(){cout << "dog" << endl;}
};

class beagle: public dog {

public:
        
    void printDog(){cout << "beagle" << endl;}
};

int main()
{
    dog mydog1;
    beagle mybeagle1;
    
    mydog1.printDog();
    mybeagle1.printDog();

    vector<dog*> vect1;
    vect1.push_back(new beagle);

    vect1[0]->printDog();
    delete vect1[0];
    vect1.pop_back();
    return 0;
}