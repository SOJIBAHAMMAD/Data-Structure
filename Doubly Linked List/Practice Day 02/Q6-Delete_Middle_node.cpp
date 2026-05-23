/*
You are given the head of a linked list. Delete the middle node, and return the head of 
the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 
0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.
*/

class Solution {
public:
    int size(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL) {
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        if(temp==NULL || temp->next==NULL) {
            return NULL;
        }
        int sz=size(head);
        int curr_pos=0;
        while(curr_pos!=(sz/2)-1) {
            temp=temp->next;
            curr_pos++;
        }
        temp->next=temp->next->next;
        return head;
    }
};