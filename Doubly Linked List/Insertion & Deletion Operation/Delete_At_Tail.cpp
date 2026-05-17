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
void DeleteAtTail(Node* &head,Node* &tail) {

     if(head==NULL) {
        return;
    }
    Node* nodeToDelete=tail;
    tail=tail->prev;
    delete nodeToDelete;
    if(tail==NULL) {
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void InsertAtTail(Node* &head,Node* &tail,int val) {
    Node* newNode=new Node(val);
    if(head==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
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
    Node* head=NULL;
    Node* tail=NULL;

    while(1) {
        int val;
        cin>>val;
        if(val==-1) {
            break;
        }
        InsertAtTail(head,tail,val);
    }
    printing_DLL(head);
    DeleteAtTail(head,tail);
    printing_DLL(head);
    return 0;
}