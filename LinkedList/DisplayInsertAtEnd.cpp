#include <iostream>
using namespace std;

class Node{
public:
    Node* next;
    int data;
    Node(int data){
        this -> next  = NULL;
        this -> data = data;
    }
};

void insertAtEnd(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail -> next = newNode;
    tail = newNode;
}

void insertAtBeginning(Node* &head,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode -> next = head;
    head = newNode;
}

void insertAtPos(Node* &head, int pos,int data){
    Node* newNode = new Node(data);
    if(pos == 1){
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode -> next = head;
        head = newNode;
    }
    Node* temp = head;
    int count = 1;
    while(count < pos - 1 && temp != NULL){
        temp = temp -> next;
        count++;
    }
    if(temp == NULL){
        cout << "Position is out of range" << endl;
        return;
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void display(Node* head){
    Node* temp = head;

    if(head == NULL){
        return;
    }
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* tail = NULL;
    Node* head = NULL;
    // Node* a = new Node(10);
    // Node* b = new Node(20);
    // Node* c = new Node(30);
    // Node* d = new Node(40);

    insertAtEnd(head,tail,10);
    insertAtEnd(head,tail,20);
    insertAtEnd(head,tail,30);
    insertAtEnd(head,tail,40);
    insertAtEnd(head,tail,50);
    insertAtPos(head,6,23);
    insertAtBeginning(head,5);
    display(head);
}