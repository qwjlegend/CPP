#include <iostream>

using namespace std;

//定义了一个标准，强制要求实现它的类必须实现这个虚拟类的方法
class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
protected:
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

    void AskForPromotion(){
        if (Age > 25){
            cout << Name << " Got Promoted!" << endl;
        }else{
            cout << Name << " not Promoted!" << endl;
        }
    }

    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};

class Developer: public Employee{
public:
    string favProgrammingLanguage;
    Developer(string name, string company, int age, string favprogramminglanguage)
        :Employee(name, company, age) // get constructor from parent class
    {
        favProgrammingLanguage = favprogramminglanguage;
    }

    void fixBug(){
        cout << Name << " Bug Fixed using " << favProgrammingLanguage << endl;
    }
};

class Teacher: public Employee{
public:
    string subject;
    void prepareLession(){
        cout << Name << " is preparing "<< subject << " lesson "<<endl;
    }
    Teacher(string name, string company, int age, string subject):Employee(name, company, age){
        subject = subject;
    }
};

int main(){
    // Employee employee1 = Employee("Andy", "Google", 30);
    // Employee employee2 = Employee("Jingjing", "Google", 25);
    // employee1.AskForPromotion();
    // employee2.AskForPromotion();
    Developer d = Developer("Andy", "Google", 30, "C++");
    // d.fixBug();
    // d.Introduce(); //can't access directly without :public Employee
    // d.AskForPromotion();
    Teacher t = Teacher("Jingjing", "Google", 25, "Math");
    t.Introduce();
    t.prepareLession();
}   

