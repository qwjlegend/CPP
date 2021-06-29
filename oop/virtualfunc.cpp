#include <iostream>

using namespace std;
/*
Virtual function, all child instances pointer will execute 
the nearest implementation of the function.
*/

class Vehicle{
public:
    //Virtual function
    virtual void charging(){
        cout << "Filling gas..." << endl;
    }
    //Pure virtual function == interface: 
    //force child class to implement this function
    virtual void run() = 0;
};

class ElectricalCar:public Vehicle{
public:
    void charging(){
        cout << "Charging..." << endl;
    }
    void run(){
        cout << "Brake brake brake!!!!" << endl;
    }
};

int main(){
    ElectricalCar* v = new ElectricalCar();
    v->charging();
    v->run();

}

