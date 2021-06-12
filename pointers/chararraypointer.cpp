#include <iostream>

using namespace std;

int main(){
    //char C[] = "Jhon";
    char C[5] = {'J','x','e','g'};
    int len = strlen(C);
    // cout << sizeof(C) << endl;
    // cout << len << endl;

    char *c2;
    c2 = C; //pointer pointing to the head of C
    cout << c2 << endl;
    cout << c2[1] << endl; // pointer can be used to do array indexing
    cout << *(c2 + 1) << endl;
    cout << *(C + 1) << endl; // C also points to the head of C array
    //C = C + 1; error
    //c2 = c2 + 1;
}
