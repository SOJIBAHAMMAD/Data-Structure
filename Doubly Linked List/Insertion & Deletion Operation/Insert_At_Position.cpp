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
int size_of_DLL(Node* &head) {
    Node* temp=head;
    int count=0;
    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }
    return count;
}
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

// Optimize for any position

void InsertAtPosition(Node* &head,Node* &tail,int val,int pos) {
    Node* newNode=new Node(val);

    if(pos < 0 || pos > size_of_DLL(head)) {
        cout<<"Invalid"<<endl;
        return;
    }

    if(pos==0) {
        InsertAtHead(head,tail,val);
        return;
    }

    if(pos==size_of_DLL(head)) {
        InsertAtTail(head,tail,val);
        return;
    }
    
    int curr_pos=0;
    Node* temp=head;
    while(curr_pos!=pos-1) {
        temp=temp->next;
        curr_pos++;
    }
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
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
    InsertAtPosition(head,tail,100,0);
    printing_DLL(head);
    InsertAtPosition(head,tail,200,6);
    printing_DLL(head);
    return 0;
}