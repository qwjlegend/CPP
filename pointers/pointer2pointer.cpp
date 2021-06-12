#include <iostream>

using namespace std;

int main(){
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    cout << *p << endl;
    cout << *q << endl;
    cout << **q << endl;
}
