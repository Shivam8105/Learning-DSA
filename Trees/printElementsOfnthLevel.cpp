#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void display(Node* root){
    if(root == nullptr){
        return;
    }

    cout << root->data << " ";

    display(root->left);
    display(root->right);
}

void printNode(Node* root,int level,int k){
    if(root == nullptr){
        return;
    }

    printNode(root->left,level+1,k);
    printNode(root->right,level+1,k);

    if(level == k){
        cout << root->data << " ";
    }
}

int main(){

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* g = new Node(7);
    Node* h = new Node(8);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = g;
    c->right = h;

    cout << "Preorder Traversal: ";
    display(a);

    cout << endl;

    int k = 2;

    cout << "Nodes at level " << k << ": ";
    printNode(a,0,k);

}