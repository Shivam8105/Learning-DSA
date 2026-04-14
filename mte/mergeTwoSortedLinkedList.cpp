// Merge two sorted linked lists into one sorted list

#include <iostream>
using namespace std;

// dummy node approach

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;

        while(list1 != nullptr && list2 != nullptr){
            if(list1 -> val <= list2 -> val){
                temp -> next = list1;
                list1 = list1 -> next;
            }else{
                temp -> next = list2;
                list2 = list2 -> next;
            }
            temp = temp -> next;
        }

        while(list1 != nullptr){
            temp -> next = list1;
            list1 = list1 -> next;
            temp = temp -> next;
        }

        while(list2 != nullptr){
            temp -> next = list2;
            list2 = list2 -> next;
            temp = temp -> next;
        }

        return dummy -> next;
    }
};

// without dummy node approach


struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* mergeLists(Node* l1, Node* l2) {
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;

    Node* head;

    // choose first node
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

    // attach remaining
    if(l1 != NULL) temp->next = l1;
    else temp->next = l2;

    return head;
}


int main(){
    int n;
    cin >> n;


}