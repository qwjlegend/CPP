#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* getNewNode(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int data){
    if (root == NULL){
        root = getNewNode(data);
        return root;
    }else if(data <= root->data){
        root->left = insert(root->left, data);
    }else{
        root->right = insert(root->right, data);
    }
    return root;
}

bool search(Node* root, int data){
    if (root == NULL) return false;
    else if (root->data == data) return true;
    else if(data <= root->data) return search(root->left, data);
    else return search(root->right, data);
}

Node* Delete(Node* root, int data){
    if (root == NULL) return root;
    else if (data < root->data) root->left = Delete(root->left, data);
    else if (data > root->data) root->right = Delete(root->right, data);
    else{
        if (root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        else if (root->left == NULL){
            Node* temp = root;
            root = root->right;
            delete temp;
        }else if(root->right == NULL){
            Node* temp = root;
            root = root->left;
            delete temp;
        }else{
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

int main(){
    Node* root = NULL;
    root = insert(root, 5);
    cout << root->data << endl;
    root = insert(root, 10);
    cout << root->data << endl;
    root = insert(root, 20);
    cout << root->data << endl;
    cout << search(root, 10) << endl;
    Delete(root, 10);
}

