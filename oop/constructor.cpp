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

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

int main(){
    Employee employee1 = Employee("Andy", "Google", 30);
    employee1.Introduce();

    Employee employee2 = Employee("Jingjing", "Google", 25);
    employee2.Introduce();

}   

