#include <iostream>

using namespace std;

int main(){
    int a = 1030;
    int *p;
    p = &a;
    // cout << p << endl;
    // cout << sizeof(int) << endl;
    // cout << p + 1 << endl;

    char *p0;
    p0 = (char*)p;
    cout << sizeof(char) << endl;
    cout << p0 + 1 << endl;
    cout << *p0 << endl;
}

