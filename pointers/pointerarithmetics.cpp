#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;
    cout << p << endl;
    cout << sizeof(int) << endl;
    cout << p + 1 << endl;
    cout << *(p + 1) << endl;
    cout << p + 2 << endl;
}
