#include <iostream>
#include <vector>

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

Node* construct(vector<int>& arr, int n){
    queue<Node*> q;
    Node* root = new Node(arr[0]);
    q.push(root);
    int i = 1;

    while(!q.empty() && i < n){
        Node* curr = q.front();
        q.pop();

        if(i < n && arr[i] != INT_MIN){
            curr -> left = new Node(arr[i]);
            q.push(curr -> left);
        }
        i++;

        if(i < n && arr[i] != INT_MIN){
            curr -> right = new Node(arr[i]);
            q.push(curr -> right);
        }
        i++;
    }
    return root;
}

void levelOrder(Node* root){
    if(root == nullptr) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* curr = q.front();
        q.pop();
        cout << curr -> data << " ";

        if(curr -> left != nullptr){
            q.push(curr -> left);
        }
        if(curr -> right != nullptr){
            q.push(curr -> right);
        }
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
    int n = arr.size();
    Node* root = construct(arr,n);

    levelOrder(root);
}