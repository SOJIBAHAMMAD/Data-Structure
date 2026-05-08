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
void InserAtHead(Node* &head,int val) {
    Node* newNode = new Node(val);
    newNode->next=head;
    head=newNode;
}

void InsertAtTail(Node* &head,int val) {

    // way 1

    // if(head==NULL) {
    //     InserAtHead(head,val);
    //     return;
    // }


    // way 2

    Node* newNode = new Node(val);
    if(head==NULL) {
        InserAtHead(head,val);
        return;
    }
    Node* temp=head;
    while(temp->next != NULL) {
        temp=temp->next;
    }
    temp->next=newNode;
}

void InsertAtPosition(Node* &head,int val,int pos) {
    Node* newNode = new Node(val);

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
    InserAtHead(head,20);
    printingLinkedList(head);
    InserAtHead(head,10);
    printingLinkedList(head);
    InsertAtTail(head,60);
    printingLinkedList(head);
    InsertAtPosition(head,100,3);
    printingLinkedList(head);
    return 0;
}
