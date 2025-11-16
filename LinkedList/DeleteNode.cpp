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

void insertAtHead(Node* &head,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode -> next = head;
    head = newNode;
}

void deleteHead(Node* &head){
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    head = head -> next;
    delete temp;
}

void deleteLast(Node* &head){
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    Node* last = temp -> next;
    delete last;
    temp -> next = NULL;
}

void deletePos(Node* &head, int pos){
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    Node* prev = NULL;
    int count = 1;
    while(count < pos - 1 && temp != NULL){
        prev = temp;
        temp = temp -> next;
        count++;
    }
    prev -> next = temp -> next;
    temp -> next = NULL;
    delete temp;
}

void display(Node* head){
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);
    display(head);
    deleteHead(head);
    display(head);
    deleteLast(head);
    display(head);
}