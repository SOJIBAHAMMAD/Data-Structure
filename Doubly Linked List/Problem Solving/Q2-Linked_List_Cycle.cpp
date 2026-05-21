/*
Given head, the head of a linked list, determine if the linked list has a cycle in it.
*/


class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        bool flag=false;
        while(fast!=NULL && fast->next!=NULL) {
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast) {
                flag=true;
                break;
            }
        }
        return flag;
    }
};