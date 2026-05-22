/*
Given the head of a singly linked list, reverse the list, and return the reversed list.
*/


class Solution {
public:
    void reverse(ListNode* &head,ListNode* temp) {
        if(temp->next==NULL) {
            head=temp;
            return;
        }
        reverse(head,temp->next);
        temp->next->next=temp;
        temp->next=NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) {
            return head;
        }
        reverse(head,head);
        return head;
    }
};