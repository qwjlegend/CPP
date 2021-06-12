#include <iostream>

using namespace std;

int* Add(int* a, int* b){
    cout << "Address of pointer a in Add " << &a << endl;
    cout << "Value in pointer a in Add (address of a in main) " << a << endl;
    cout << "Value at address stored in a in Add " << *a << endl;
    int* c = new int; 
    *c = *a + *b;
    return c;
}

int main(){
    int a = 2, b = 4;
    cout << "Address of a in main " << &a << endl;
    int* c = Add(&a, &b); //the memory allocated for c pointer maybe wiped out !!!
    cout << *c << endl;
}
