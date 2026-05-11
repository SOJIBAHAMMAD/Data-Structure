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
void duplicate(Node* &head) {
    bool flag=false;
    Node* temp=head;
    for(Node* temp=head;temp->next!=NULL;temp=temp->next) {
        for(Node* temp2=temp->next;temp2!=NULL;temp2=temp2->next) {
            if(temp->val == temp2->val) {
                flag=true;
                break;
            }
        }
        if(flag) break;
    }
    if(flag) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
}
int main () {
    Node* head=NULL;
    Node* tail=NULL;
    while(1) {
        int value;
        cin>>value;
        if(value==-1) {
            break;
        }
        InsertAtTail(head,tail,value);
    }
    duplicate(head);
    return 0;
}