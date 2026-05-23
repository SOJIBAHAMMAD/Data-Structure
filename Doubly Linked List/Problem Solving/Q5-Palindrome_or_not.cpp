/*
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
*/

class Solution {
public:
    void Insert_at_tail(ListNode* &newHead,ListNode* &newTail,int val) {
        ListNode* newNode=new ListNode (val);
        if(newHead==NULL) {
            newHead=newNode;
            newTail=newNode;
            return;
        }
        newTail->next=newNode;
        newTail=newNode;
    }
    void reverse(ListNode* &newHead,ListNode* temp) {
        if(temp->next==NULL) {
            newHead=temp;
            return;
        }
        reverse(newHead,temp->next);
        temp->next->next=temp;
        temp->next=NULL;
    }
    bool isPalindrome(ListNode* head) {
          ListNode* newHead=NULL;
          ListNode* newTail=NULL;
          ListNode* temp=head;
        while(temp!=NULL) {
            Insert_at_tail(newHead,newTail,temp->val);
            temp=temp->next;
        }
        reverse(newHead,newHead);
        ListNode* temp1=head;
        ListNode* temp2=newHead;
        bool flag=true;
        while(temp1!=NULL && temp2!=NULL) {
            if(temp1->val!=temp2->val) {
                flag=false;
                break;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return flag;
    }
};

// way two using vector 

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>v1;
        ListNode* temp=head;
        while(temp!=NULL) {
            v1.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>v2;
        v2=v1;
        reverse(v2.begin(),v2.end());
        if(v1==v2) {
            return true;
        } else {
            return false;
        }
    }
};