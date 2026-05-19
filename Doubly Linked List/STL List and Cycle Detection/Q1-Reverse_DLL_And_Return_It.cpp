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
int size_Of_LL(Node* &head) {
    return size;
}
void Reverse_DLL(Node* &head,Node* &tail) {
    Node* temp1=head;
    Node* temp2=tail;
    while(temp1!=temp2 && temp1->prev!=temp2) {    // for odd node condition 1 and for even node condition 2.
        swap(temp1->val,temp2->val);
        temp1=temp1->next;
        temp2=temp2->prev;
    }

    // way 2
    // int len=size_Of_LL(head);
    // int i=0,j=len-1;
    // while(i<j) {
    //     swap(temp1->val,temp2->val);
    //     temp1=temp1->next;
    //     temp2=temp2->prev;
    //     i++;
    //     j--;
    // }
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
    Reverse_DLL(head,tail);
    printing_DLL(head);
    return 0;
}