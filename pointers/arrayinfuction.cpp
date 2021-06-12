#include <iostream>

using namespace std;
// array 作为参数传递时，只会传第一个element的指针
int sumOfElements(int A[]){ // int* A
    int i, sum = 0;
    cout << "In helper function: " << sizeof(A) << endl; //address of the first element
    cout << sizeof(A[0]) << endl;
    int size = sizeof(A) / sizeof(A[0]);
    for(i = 0; i < size; i++){
        sum += A[i];
    }
    return sum;
}

int main(){
    int A[] = {1, 2, 3, 4, 5};
    cout << "In main function: " << sizeof(A) << endl;
    int total = sumOfElements(A);
    cout << total << endl; 
}
