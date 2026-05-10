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
void InserAtHead(Node* &head,Node* &tail,int val) {
    Node* newNode = new Node(val);
    if(head==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head=newNode;
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
    Node* tail = new Node(50);
    head->next=a;
    a->next=tail;
    printingLinkedList(head);
    InserAtHead(head,tail,20);
    printingLinkedList(head);
    InserAtHead(head,tail,10);
    printingLinkedList(head);
    return 0;
}