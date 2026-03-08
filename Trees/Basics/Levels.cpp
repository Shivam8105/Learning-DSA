#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this -> data = data;
        this -> left = nullptr;
        this -> right = nullptr;
    }
};

void display(Node* root){
    if(root == nullptr){
        return;
    }
    cout << root -> data << " ";
    display(root -> left);
    display(root -> right);
}

int levels(Node* root){
    if(root == nullptr){
        return 0;
    }
    return 1 + max(levels(root -> left), levels(root -> right));
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* g = new Node(7);
    Node* h = new Node(8);
    a -> left = b;
    a -> right = c;
    b -> left = d;
    b -> right = e;
    c -> left = g;
    c -> right = h;
    display(a);
    cout << endl;
    cout << levels(a);
}