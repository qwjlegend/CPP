#include <iostream>

using namespace std;

void func(int A[][2][2]){
    cout << A[2][1][1] << endl;
}

int main(){
    int C[3][2][2] = {
        {{2,5}, {7,9}},
        {{3,4}, {6,1}},
        {{0,8}, {11,13}}
    };
    // cout << C << endl;
    // cout << *C << endl;
    // cout << C[0] << endl;
    // cout << &C[0][0] << endl;
    // cout << *(C[0][0] + 1) << endl;
    func(C);
}
