#include <iostream>

using namespace std;
//int array is different from char array!!!
int main(){
    int A[] = {2, 3, 4, 5, 6};
    cout << A << endl; //address of the first element
    cout << &A[0] << endl;
    cout << A[0] << endl;
    cout << *A << endl; //value of the first element

    for(int i = 0; i < 5; i ++){
        cout << &A[i] << endl;
        cout << A + i << endl;
        cout << A[i] << endl;
        cout << *(A + i) << endl;
    }

}
