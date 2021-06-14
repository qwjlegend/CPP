#include <iostream>

using namespace std;

//定义了一个标准，强制要求实现它的类必须实现这个虚拟类的方法
class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
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

int main(){
    Employee employee1 = Employee("Andy", "Google", 30);
    Employee employee2 = Employee("Jingjing", "Google", 25);
    employee1.AskForPromotion();
    employee2.AskForPromotion();

}   

