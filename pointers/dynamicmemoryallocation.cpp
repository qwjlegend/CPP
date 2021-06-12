#include <iostream>

using namespace std;

int main(){
    int a;
    int* p;
    p = new int;
    *p = 100;
    cout << *p << endl;
    delete p;
    p = new int[20];
    cout << *p << endl;
    //*p -> dereference the first element in the array 
    p[0] = 1;
    p[1] = 2;
    *(p + 2) = 3;
    *(p + 3) = 4;
    for (int i = 0; i < 4; i++){
        cout << p[i];
    }
    cout << endl;
    delete[] p;
}
