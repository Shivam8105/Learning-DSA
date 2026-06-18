#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

// 🔹 Merge using dummy node
Node* mergeWithDummy(Node* l1, Node* l2) {
    Node* dummy = new Node(-1);
    Node* temp = dummy;

    while(l1 != NULL && l2 != NULL) {
        if(l1->data <= l2->data) {
            temp->next = l1;
            l1 = l1->next;
        } else {
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }

    if(l1) temp->next = l1;
    else temp->next = l2;
    return dummy->next;
}

// 🔹 Merge without dummy node
Node* mergeWithoutDummy(Node* l1, Node* l2) {
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    Node* head;

    if(l1->data <= l2->data) {
        head = l1;
        l1 = l1->next;
    } else {
        head = l2;
        l2 = l2->next;
    }

    Node* temp = head;

    while(l1 != NULL && l2 != NULL) {
        if(l1->data <= l2->data) {
            temp->next = l1;
            l1 = l1->next;
        } else {
            temp->next = l2;
            l2 = l2->next;
        }
        temp = temp->next;
    }

    if(l1) temp->next = l1;
    else temp->next = l2;

    return head;
}

// 🔹 Helper: create list
Node* createList(int n) {
    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// 🔹 Helper: print list
void printList(Node* head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n1, n2;

    cin >> n1;
    Node* list1 = createList(n1);

    cin >> n2;
    Node* list2 = createList(n2);

    // choose one:
    Node* merged = mergeWithDummy(list1, list2);
    // Node* merged = mergeWithoutDummy(list1, list2);

    printList(merged);

    return 0;
}