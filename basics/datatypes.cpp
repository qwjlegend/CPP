#include <iostream>
#include <cmath>
using namespace std;

int main(){
    char grade = 'A';
    string name = "Andy";
    int age = 50;
    double money = 6.221;
    bool check = true;
    name[3] = 'g';
    cout << name.length() << endl;
    cout << name[0] << endl;
    cout << name << endl;
    cout << name.find("nd", 1) << endl;
    cout << name.substr(1,2) << endl;

    age++;
    cout << age << endl;

    age += 1;
    cout << age << endl;
    
    cout << 10 / 3 << endl;
    cout << 10.0 / 3 << endl;

    cout << pow(1.3, 10) << endl;
    cout << sqrt(37) << endl;
    cout << round(3.5) << endl;
    cout << fmax(3, 10) << endl;

    // Initializes a variable of char data type
    char character = 'A';
    // Declares a variable of int type
    int ASCII;
    // Converts char data type into int explicitly
    ASCII = (int) character;
    // Prints value of variable
    cout << "ASCII value = " << ASCII;

    return 0;
}

