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
int Size_Of_Linked_List(Node* &head) {
    int count=0;
    Node* temp=head;
    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }
    return count;
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
    Node* head1=NULL;
    Node* tail1=NULL;
    while(1) {
        int val;
        cin>>val;
        if(val==-1) {
            break;
        } 
        InsertAtTail(head1,tail1,val);
    }
    Node* head2=NULL;
    Node* tail2=NULL;
    while(1) {
        int val;
        cin>>val;
        if(val==-1) {
            break;
        } 
        InsertAtTail(head2,tail2,val);
    }
    if(Size_Of_Linked_List(head1)!=Size_Of_Linked_List(head2)) {
        cout<<"NO"<<endl;
    } else {
        bool flag=true;
        Node* temp1=head1;
        Node* temp2=head2;
        while(temp1!=NULL && temp2!=NULL) {
            if(temp1->val!=temp2->val) {
                flag=false;
                break;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(flag) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}