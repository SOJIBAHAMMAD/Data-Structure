#include<bits/stdc++.h>
using namespace std;
int size=0;
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
void sort_in_ascending(Node* &head) {
    for(Node* temp1=head;temp1->next!=NULL;temp1=temp1->next) {
        for(Node* temp2=temp1->next;temp2!=NULL;temp2=temp2->next) {
            if(temp1->val>temp2->val) {
                swap(temp1->val,temp2->val);
            }
        }
    }
}
void InsertAtTail(Node* &head,Node* &tail,int val) {
    Node* newNode=new Node(val);
    size++;
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
    sort_in_ascending(head);
    printing_DLL(head);
    return 0;
}