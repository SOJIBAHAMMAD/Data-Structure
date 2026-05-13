/* 
Question: Take two singly linked lists as input and check if their sizes are same or not.
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
void display(Node* &head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
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
    display(head1);
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
    display(head2);
    if(Size_Of_Linked_List(head1)==Size_Of_Linked_List(head2)) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}

// I did extra part is printing which is not mentioned in question but for better understanding i did it.
