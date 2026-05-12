/*
Question: Create a singly linked list and check if the linked list is sorted in ascending order.
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
void Ascending_Order_Or_Not(Node* &head) {
    bool flag=true;
    Node* temp=head;
    while(temp->next!=NULL) {
        if(temp->val>temp->next->val) {
            flag=false;
            break;
        }
        temp=temp->next;
    }
    if(flag) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}
void InsertAtTail(Node* &head,Node* &tail,int val) {
    Node* newNode = new Node(val);
    if(head==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void display(Node* &head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main () {
    Node* head=NULL;
    Node* tail=NULL;
    while(1) {
        int value;
        cin>>value;
        if(value==-1) {
            break;
        }
        InsertAtTail(head,tail,value);
    }
    display(head);
    Ascending_Order_Or_Not(head);
    return 0;
}