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
void diff_Of_Min_Max(Node* &head) {
    Node* temp=head;
    int min=INT_MAX;
    int max=INT_MIN;
    while(temp!=NULL) {
        if(temp->val > max) {
            max=temp->val;
        }
        if(temp->val < min) {
            min=temp->val;
        }
        temp=temp->next;
    }
    cout<<max-min<<endl;
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
    diff_Of_Min_Max(head);
    return 0;
}
