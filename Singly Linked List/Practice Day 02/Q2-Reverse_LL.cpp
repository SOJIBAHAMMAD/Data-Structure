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
void reverse_of_LL(Node* temp) {
    // base case
    if(temp==NULL) {
        return;
    }
    reverse_of_LL(temp->next);
    cout<<temp->val<<" ";
}
void InsertAtTail(Node* &head,Node* &tail,int val) {
    Node* newNode = new Node(val);
    if(head==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=tail->next;
    // or tail=newNode;
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
    Node* head = NULL;
    Node* tail = NULL;
    while(1) {
        int val;
        cin>>val;
        if(val==-1) {
            break;
        }
        InsertAtTail(head,tail,val);
    }
    printingLinkedList(head);
    reverse_of_LL(head);
    return 0;
}