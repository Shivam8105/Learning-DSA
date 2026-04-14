#include <iostream>
#include <cstdlib>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;

        int lenA = 0, lenB = 0;

        while(temp1){
            lenA++;
            temp1 = temp1->next;
        }

        while(temp2){
            lenB++;
            temp2 = temp2->next;
        }

        temp1 = headA;
        temp2 = headB;

        int diff = abs(lenA - lenB);

        if(lenA > lenB){
            while(diff--) temp1 = temp1->next;
        } else {
            while(diff--) temp2 = temp2->next;
        }

        while(temp1 != temp2){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return temp1;
    }
};

int main() {
    // 🔹 Create intersection part
    ListNode* common = new ListNode(8);
    common->next = new ListNode(10);

    // 🔹 List A: 3 -> 7 -> 8 -> 10
    ListNode* headA = new ListNode(3);
    headA->next = new ListNode(7);
    headA->next->next = common;

    // 🔹 List B: 99 -> 1 -> 8 -> 10
    ListNode* headB = new ListNode(99);
    headB->next = new ListNode(1);
    headB->next->next = common;

    Solution obj;
    ListNode* result = obj.getIntersectionNode(headA, headB);

    if(result)
        cout << "Intersection at node with value: " << result->val << endl;
    else
        cout << "No intersection" << endl;

    return 0;
}