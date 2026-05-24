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
void InsertAtPosition(Node* &head,Node* &tail,int val,int pos) {
    Node* newNode=new Node(val);
    if(pos==0) {
        head=newNode;
        tail=newNode;
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
void backward_printing_DLL(Node* &tail) {
    Node* temp=tail;
    cout<<"R -> ";
    while(temp!=NULL) {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void forward_printing_DLL(Node* &head) {
    Node* temp=head;
    cout<<"L -> ";
    while(temp!=NULL) {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main () {
    Node* head=NULL;
    Node* tail=NULL;
    int Q;
    cin>>Q;
    while(Q--) {
        int X,V;
        cin>>X>>V;
        int size=size_of_DLL(head);
        if(X==0) {
            InsertAtHead(head,tail,V);
            forward_printing_DLL(head);
            backward_printing_DLL(tail);
        } else if(X==size) {
            InsertAtTail(head,tail,V);
            forward_printing_DLL(head);
            backward_printing_DLL(tail);
        } else if(X<0 || X>size) {
            cout<<"Invalid"<<endl;
        } else {
            InsertAtPosition(head,tail,V,X);
            forward_printing_DLL(head);
            backward_printing_DLL(tail);
        }
    }  
    return 0;
}