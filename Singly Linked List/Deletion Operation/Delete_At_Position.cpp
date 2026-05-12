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
void Delete_At_Position(Node* &head,int pos) {
    Node* temp=head;
    int curr_pos=0;
    while(curr_pos!=pos-1) {
        temp=temp->next;
        curr_pos++;
    }
    Node* nodeToDelete=temp->next;
    temp->next=temp->next->next;
    delete(nodeToDelete);
}
void InsertAtTail(Node* &head,Node* &tail,int val) {
    Node* newNode=new Node(val);
    if(head==NULL) {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print_linked_list(Node* &head) {
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
    print_linked_list(head);
    Delete_At_Position(head,3);
    print_linked_list(head);
    return 0;
}