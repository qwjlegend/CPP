#include <iostream>

using namespace std;

int compare(int a, int b){
    if(a > b) return 1;
    else return -1;
}

void sort(int *A, int n, int (*ptr)(int, int)){
    int i, j, temp;
    for(i = 0; i < n; i++)
        for(j = 0; j < n - 1; j++){
            if (ptr(A[j], A[j + 1]) > 0){
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
}

int main(){
    int A[] = {3, 2, 1, 5,  6 ,4};
    sort(A, 6, compare);
    for (int i = 0; i < 6; i++){
        cout << A[i] << endl;
    }
}



// void A(){
//     cout << "Hello" << endl;
// }

// void B(void (*ptr)()){ //function pointer as argument
//     ptr(); //call-back function that "ptr" points to
// }

// int main(){
//     void (*p)() = A;
//     //B(p);
//     B(A);
// }
