/*
Question: Take a singly linked list as input, then take q queries. In each query you 
will be given an index and value. You need to insert those values in the given 
index and print the linked list. If the index is invalid print “Invalid”.
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
void InsertAtHead(Node* &head,int val) {
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
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
void InsertAtPosition(Node* &head,int pos,int val) {
    Node* newNode= new Node(val);
    if(pos==0) {
        head=newNode;
        return;
    }
    Node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos-1) {
        temp=temp->next;
        curr_pos++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
int size_of_LL(Node* &head) {
    Node* temp=head;
    int count=0;
    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }
    return count;
}
void printingLinkedList(Node* &head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main () {
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(1) {
        cin>>val;
        if(val==-1) {
            break;
        }
        InsertAtTail(head,tail,val);
    }
    int q;
    cin>>q;
    while(q--) {
        int idx,value;
        cin>>idx>>value;
        if(idx==0) {
            InsertAtHead(head,value);
            printingLinkedList(head);
        } else if(idx==size_of_LL(head)) {
            InsertAtTail(head,tail,value);
            printingLinkedList(head);
        } else if(idx>size_of_LL(head)) {
            cout<<"Invalid"<<endl;
        } else {
            InsertAtPosition(head,idx,value);
            printingLinkedList(head);
        }
    }
    return 0;
}