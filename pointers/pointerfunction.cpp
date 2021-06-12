#include <iostream>

using namespace std;

void increment(int* a){
    *a += 1;
}

int main(){
    int a;
    a = 10;
    increment(&a);
    cout << a << endl;
}
