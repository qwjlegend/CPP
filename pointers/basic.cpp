#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    cout << p << endl; // address
    cout << *p << endl; // value
    *p = 12; // dereferencing;
    cout << a << endl;

    int b = 20;
    *p = b;
    cout << p << endl;
    cout << *p << endl;
}