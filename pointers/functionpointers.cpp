#include <iostream>

using namespace std;

int Add(int a, int b){
    return a + b;
}
// int* Add1(int a, int b){
//     int c = a + b;
//     return &c;
// }
int main(){
    int c;
    int (*p)(int, int); //function pointer for Add with return type of int
    //int *p(int, int); //function pointer for Add1 with return type of int*
    p = &Add;
    c = (*p)(2, 3);
    cout << c << endl;
}
