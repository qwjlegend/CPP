#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};
// Inserting into an Empty List
void insertEmptyList(){
    Node* A = NULL;
    Node* temp = new Node();
    temp->data = 2;
    temp->next = NULL;
    A = temp;
    cout << A->data << endl;
}

// Inserting into the end of a list
void insertEndofList(){
    Node* temp = new Node();
    temp->data = 2;
    temp->next = NULL;
    Node* A = temp; //A points to head
    //create a new node
    temp = new Node();
    temp->data = 4;
    temp->next = NULL;
    Node* temp1 = A;
    while (temp1->next != NULL){
        temp1 = temp1->next;
    }
    temp1->next = temp;
}


// Insert at the beginning of a list
Node* insert(Node* head, int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
    //cout << head << endl;
    return head;
}

void print(Node* head){
    while (head != NULL){
        cout << head->data;
        head = head->next;
    }
    cout << endl;
}

void insertAtBegin(int n){
    Node* head = NULL;
    for (int i = 0; i < n; i++){
        head = insert(head, i);
        print(head);
    }
    
}

Node* head = new Node();

void insertNth(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if (n == 1){
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for (int i = 0; i < n - 2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}

// Insert at the nth position of a list
void insertAtNth(){
    head = NULL;
    insertNth(2,1);
    insertNth(3,1);
    print(head);
}



//Delete a node 
void deleteN(int n){
    Node* temp1 = head;
    if (n == 1){
        head = temp1->next;
        delete(temp1);
        return;
    }
    for (int i = 0; i < n - 2; i ++){
        temp1 = temp1->next;
    }
    Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    delete temp2;
}
void deleteNth(){
    insertNth(1,1);
    insertNth(2,1);
    insertNth(3,1);
    insertNth(4,1);
    insertNth(5,1);
    print(head);
    deleteN(3);
    print(head);
}

//Reverse a linked list
void reverse(){
    Node *cur, *prev, *nxt;
    cur = head;
    prev = NULL;
    while (cur != NULL){
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    head = prev;
}

int main(){
    // insertEmptyList();
    // nsertEndofList();
    // insertAtBegin(10);
    // insertAtNth();
    deleteNth();
    return 0;
}

