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
void InsertAtTail(Node* &head,int val) {
    Node* newNode = new Node(val);
    if(head==NULL) {
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next != NULL) {
        temp=temp->next;
    }
    temp->next=newNode;
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
    Node* head = new Node(30);
    Node* a= new Node(40);
    Node* b = new Node(50);
    head->next=a;
    a->next=b;
    printingLinkedList(head);
    InsertAtTail(head,60);
    printingLinkedList(head);
    return 0;
}