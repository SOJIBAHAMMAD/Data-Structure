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
void InsertAtHead(Node* &head,Node* &tail,int val) {
    Node* newNode=new Node(val);
    if(head==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
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
void deleteAtHead(Node* &head) {
    Node* noteTodelete=head;
    head=head->next;
    delete(noteTodelete);
}
void Delete_At_Position(Node* &head,Node* &tail,int pos) {
    if(head==NULL) {
        return;
    }
    if(pos==0) {
        deleteAtHead(head);
        if(head==NULL) {
            tail=NULL;
        }
        return;
    }
    Node* temp=head;
    int curr_pos=0;
    while(temp!=NULL && curr_pos!=pos-1) {
        temp=temp->next;
        curr_pos++;
    }
    if(temp==NULL || temp->next==NULL) {
        return;
    }
    Node* nodeToDelete=temp->next;
    temp->next=temp->next->next;
    if(temp->next==NULL) {
        tail=temp;
    }
    delete(nodeToDelete);
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
    int Q;
    cin>>Q;
    while(Q--) {
        int X,V;
        cin>>X>>V;
        if(X==0) {
            InsertAtHead(head,tail,V);
            printingLinkedList(head);
        } else if(X==1) {
            InsertAtTail(head,tail,V);
            printingLinkedList(head);
        } else if(X==2) {
            Delete_At_Position(head,tail,V);
            printingLinkedList(head);
        }
    }
    return 0;
}