#include <iostream>
using namespace std;

class Node{
public:
    Node* next;
    int data;
    Node(int data){
        this -> next = NULL;
        this -> data = data;
    }
};

void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode -> next = head;
    head = newNode;
}

void deleteNode(Node* )

int main(){
    
}