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
void DeleteAtHead(Node* &head,Node* &tail) {

    if(head==NULL) {
        return;
    }

    Node* nodeToDelete=head;
    head=head->next;
    delete(nodeToDelete);
    if(head==NULL) {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
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

// It's the most optimized code for deleteting in any position.
void DeleteAtPosition(Node* &head,Node* &tail,int pos) {

    // for invalid position
    if(pos<0 || pos>=size_of_DLL(head)) {
        cout<<"Invalid"<<endl;
        return;
    }

    // for head delete
    if(pos==0) {
        DeleteAtHead(head,tail);
        return;
    }

    // for tail delete
    if(pos==size_of_DLL(head)-1) {
        DeleteAtTail(head,tail);
        return;
    }

    // for middle elements
    Node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos-1) {
        temp=temp->next;
        curr_pos++;
    }
    Node* nodeToDelete=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete nodeToDelete;
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
    DeleteAtPosition(head,tail,0);
    printing_DLL(head);
    DeleteAtPosition(head,tail,3);
    printing_DLL(head);
    return 0;
}