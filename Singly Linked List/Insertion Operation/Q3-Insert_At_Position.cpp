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
void InsertAtPosition(Node* &head,int val,int pos) {
    Node* newNode = new Node(val);

    if(pos==0) {
        newNode->next=head;
        head=newNode;
        return;
    }

    Node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos-1) {
        temp=temp->next;
        if(temp==NULL) {
            return;      // if user give invalid position.
        }
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
    InsertAtPosition(head,100,1);
    printingLinkedList(head);
    return 0;
}