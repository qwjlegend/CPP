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

    virtual void Work(){ //virtual keyword tells all child class method to refer to the nearest parent method
        cout << Name << " is checking email, task backlog" << endl;
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

    void Work(){ //override
        cout << Name << " is programming " << endl;
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

    // void Work(){ //override
    //     cout << Name << " is teaching " << endl;
    // }
};

int main(){
    Developer d = Developer("Andy", "Google", 30, "C++");
    Teacher t = Teacher("Jingjing", "Google", 25, "Math");
    d.Work();
    t.Work();
    // The most common use of polymorphism is when a parent class reference is used to refer to a child class object
    Employee* e1 = &d;
    Employee* e2 = &t;
    
    e1->Work();
    e2->Work();
}   

