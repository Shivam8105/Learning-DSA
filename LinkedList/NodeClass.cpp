#include <iostream>
using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this -> val = val;
        this -> next = NULL;
    }
};

int main(){
    Node a(10);
    // a.val = 10;
    Node b(20);
    // b.val = 20;
    Node c(30);
    // c.val = 30;
    Node d(40);
    // d.val = 40;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
    // cout << (((a.next)-> next)-> next)->val;

    Node temp = a;
    while(temp.next != NULL){
        cout << temp.val << " ";
        temp = *(temp.next);
    }
}