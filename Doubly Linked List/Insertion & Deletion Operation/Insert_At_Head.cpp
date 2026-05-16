#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void InsertAtHead(Node* &head,Node* &tail,int val) {
    Node* newNode=new Node(val);
    if(head==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void printing_DLL(Node* &head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main () {
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);

    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;
    printing_DLL(head);
    InsertAtHead(head,tail,40);
    printing_DLL(head);
    return 0;
}