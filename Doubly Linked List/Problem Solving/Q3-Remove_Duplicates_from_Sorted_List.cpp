/*
Given the head of a sorted linked list, delete all duplicates such that each element 
appears only once. Return the linked list sorted as well.
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL) {
            return head;
        }
        ListNode* temp=head;
        while(temp->next!=NULL) {
            if(temp->val==temp->next->val) {
                ListNode* nodeToDelete=temp->next;
                temp->next=temp->next->next;
                delete nodeToDelete;
            } else {
                temp=temp->next;
            }
        }
        return head;
    }
};