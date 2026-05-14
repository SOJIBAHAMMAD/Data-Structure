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
void Sort_In_Descending_Order(Node* &head) {
    for(Node* temp1=head;temp1->next!=NULL;temp1=temp1->next) {
        for(Node* temp2=temp1->next;temp2!=NULL;temp2=temp2->next) {
            if(temp1->val < temp2->val) {
                swap(temp1->val , temp2->val);
            }
        }
    }
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
    Sort_In_Descending_Order(head);
    printingLinkedList(head);
    return 0;
}