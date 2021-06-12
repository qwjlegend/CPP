#include <iostream>

using namespace std;

int main(){
    int a = 6;
    int *p = &a;
    // 64 bit architecture does not alter the integer model compared to 32 bit. Only address/pointer length.
    cout << "size of int pointer: " << sizeof(p) << endl;
    cout << "size of int: " << sizeof(a) << endl;

    long int c = 6;
    long int *pc = &c;
    // 64 bit architecture does not alter the integer model compared to 32 bit. Only address/pointer length.
    cout << "size of long int pointer: " << sizeof(c) << endl;
    cout << "size of long int: " << sizeof(pc) << endl;

    char b = 'c';
    char *pb = &b;
    cout << "size of char pointer: " << sizeof(pb) << endl;
    cout << "size of char: " << sizeof(b) << endl;
}
