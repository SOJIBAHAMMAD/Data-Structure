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

void forward_print(Node* &head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void backward_print(Node* &tail) {
    Node* temp=tail;
    while(temp!=NULL) {
        cout<<temp->val<<"<->";
        temp=temp->prev;
    }
    cout<<"NULL"<<endl;
}
int main () {
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* tail=new Node(30);

    head->next=a;
    a->prev=head;
    a->next=tail;
    tail->prev=a;
    forward_print(head);
    backward_print(tail);
    return 0;
}