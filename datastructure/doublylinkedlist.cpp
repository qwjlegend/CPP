#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

//wrong! Node stored in stack will be reclaimed
// Node* head;
// void InsertAtHead(int x){
//     Node myNode;
//     myNode.data = x;
//     myNode.prev = NULL;
//     myNode.next = NULL;
// }

void InsertAthead(int x){
    Node *myNode = new Node();
    myNode->data = x;
    myNode->prev = NULL;
    myNode->next = NULL;
}

void Print(){


}

int main(){

}

