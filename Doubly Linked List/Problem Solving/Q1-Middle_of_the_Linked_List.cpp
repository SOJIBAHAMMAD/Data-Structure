/*
Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.
*/


class Solution {
public:
    int size_of_LL(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL) {
            count++;
            temp=temp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int size=size_of_LL(head);
        int curr_pos=0;
        while(curr_pos!=size/2) {
            temp=temp->next;
            curr_pos++;
        }
        return temp;
    }
};
