/*
Question: Take a singly linked list as input, then print the maximum value of them.
*/

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int val) {
        this->val=val;
        this->next=NULL;
    }
};
void Max_value_Of_LL(Node* &head) {
    int max=INT_MIN;
    Node* temp=head;
    while(temp!=NULL) {
        if(temp->val > max) {
            max=temp->val;
        }
        temp=temp->next;
    }
    cout<<max<<endl;
}
void InsertAtTail(Node* &head,Node* &tail,int val) {
    Node* newNode = new Node(val);
    if(head==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=tail->next;
    // or tail=newNode;
}

void printingLinkedList(Node* &head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main () {
    Node* head = NULL;
    Node* tail = NULL;
    while(1) {
        int val;
        cin>>val;
        if(val==-1) {
            break;
        }
        InsertAtTail(head,tail,val);
    }
    printingLinkedList(head);
    Max_value_Of_LL(head);
    return 0;
}