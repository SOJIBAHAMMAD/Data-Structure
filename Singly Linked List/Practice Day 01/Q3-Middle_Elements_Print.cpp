/* Question: Create a singly linked list and print the middle element. 
If there are multiple values in the middle print both.
*/
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
int size_of_LL(Node* &head) {
    Node* temp=head;
    int count=0;
    while(temp!=NULL) {
        count++;
        temp=temp->next;
    }
    return count;
}
void Printing_Middle_Element(Node* &head) {
    Node* temp=head;
    int size=size_of_LL(head);
    int mid=size_of_LL(head)/2;
    int idx=0;
    while(idx!=mid-1) {
        idx++;
        temp=temp->next;
    }
    if(size%2!=0) {
        cout<<temp->next->val<<endl;
    } else {
        cout<<temp->val<<" "<<temp->next->val<<endl;
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
    tail=newNode;
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
        int value;
        cin>>value;
        if(value==-1) {
            break;
        }
        InsertAtTail(head,tail,value);
    }
    display(head);
    Printing_Middle_Element(head);
    return 0;
}