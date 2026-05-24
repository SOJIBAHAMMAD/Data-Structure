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
void palindrome(Node* &head,Node* &tail) {
    Node* temp1=head;
    Node* temp2=tail;
    bool flag=true;
    while(temp1!=temp2 && temp1->prev!=temp2) {
        if(temp1->val!=temp2->val) {
            flag=false;
            break;
        } else {
            temp1=temp1->next;
            temp2=temp2->prev;
        }
    }
    if(flag) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
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
int main () {
    Node* head=NULL;
    Node* tail=NULL;
    while(true) {
        int val;
        cin>>val;
        if(val==-1) {
            break;
        }
        InsertAtTail(head,tail,val);
    }
    palindrome(head,tail);

    return 0;
}