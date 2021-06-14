#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* top = NULL;

void push(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = top;
    top = temp;
}

void pop(){
    Node* temp;
    if (top == NULL)return;
    temp = top;
    top = top->link;
    delete(temp);
}
void Print(){
    Node* temp = top;
    while (temp != NULL){
        cout << temp->data; 
        temp = temp->link;
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

