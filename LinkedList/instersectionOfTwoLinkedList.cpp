/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *getIntersectionNode(Node *headA, Node *headB)
{
    int lenA = 0;
    int lenB = 0;

    Node *temp1 = headA;
    Node *temp2 = headB;

    while (temp1 != NULL)
    {
        lenA++;
        temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
        lenB++;
        temp2 = temp2->next;
    }

    if (lenA == lenB)
    {
        temp1 = headA;
        temp2 = headB;
        while (temp1 != temp2)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return temp1;
    }
    else
    {
        temp1 = headA;
        temp2 = headB;
        int diff = abs(lenA - lenB);
        if (lenA > lenB)
        {
            while (diff--)
                temp1 = temp1->next;
        }
        else
        {
            while (diff--)
                temp2 = temp2->next;
        }
    }
    while (temp1 != temp2)
    {
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return temp1;
}

int main(){
    
}