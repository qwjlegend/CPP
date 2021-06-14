#include <iostream>

using namespace std;
const int MAX_SIZE=101;
int A[MAX_SIZE];
int top = -1;

void push(int x){
    if(top == MAX_SIZE - 1){
        cout << "Overflow" << endl;
        return;
    }
    A[++top] = x; //increment happen before assignment
}

void pop(){
    if (top == -1){
        cout << "No element to pop" << endl;
        return;
    }
    top--;
}

int Top(){
    return A[top];
}

void Print(){
    int i;
    for (i = 0; i <=top; i++){
        cout << A[i];
    }
    cout << endl;
}
int main(){
    push(2);Print();
    push(3);Print();
    push(4);Print();
    pop();Print();
    push(12);Print();
}

