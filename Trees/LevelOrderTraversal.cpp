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

void levelOrder(Node* root){
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        cout << front -> data << " ";
        if(front -> left != nullptr){
            q.push(front -> left);
        }

        if(front -> right != nullptr){
            q.push(front -> right);
        }
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

    cout << "Level Order Traversal: ";
    levelOrder(a);
}