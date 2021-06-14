#include <iostream>

using namespace std;

class Employee{
private:
    string Name;
    string Company;
    int Age;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if (age >= 18){
            Age = age;
        }
    }
    int getAge(){
        return Age;
    }
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
    Employee* employee1 = new Employee("Andy", "Google", 30);
    employee1->Introduce();

    Employee employee2 = Employee("Jingjing", "Google", 25);
    employee2.Introduce();

    //employee1.setAge(10);
    //cout << employee1.getName() <<  employee1.getAge() << endl;
}   

