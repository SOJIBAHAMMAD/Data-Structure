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

int countNode(Node* &head) {
    Node* temp=head;
    int count=0;
    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }
    return count;
}
void display(Node* &head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main () {
    Node* head=NULL;
    Node* tail=NULL;
    while(1) {
        int x;
        cin>>x;
        if(x==-1) {
            break;
        }
        InsertAtTail(head,tail,x);
    }
    display(head);
    cout<<"Size of the linked list is : "<<countNode(head)<<endl;  // TC for calculate size is O(N) but i can be optimize.
    return 0;
}