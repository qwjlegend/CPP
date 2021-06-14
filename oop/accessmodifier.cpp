#include <iostream>

using namespace std;

class Employee{
    public:
        string Name;
        string Company;
        int Age;
    
        void Introduce(){
            cout << "Name - " << Name << endl;
            cout << "Company - " << Company << endl;
            cout << "Age - " << Age << endl;
        }
};

int main(){
    Employee employee1;
    employee1.Name = "Andy";
    employee1.Company = "Google";
    employee1.Age = 30;
    employee1.Introduce();

    Employee employee2;
    employee1.Name = "Jingjing";
    employee1.Company = "Google";
    employee1.Age = 25;
    employee1.Introduce();

}   

