#include <iostream>
#include <string>

using namespace std;

void print(char* C){
    // int i = 0;
    // while(C[i] != '\0'){
    //     cout << C[i];
    //     i++;
    // }
    while(*C != '\0'){
        cout << *C;
        C++;
    }
    cout << endl;
}

int main(){
    char C[20] = "Hello";
    print(C);
    // char* C = "Hello";
    // C[0] = "g"; won't work!
}
