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
void delete_duplicate(Node* &head) {
    Node* temp1=head;
    while(temp1!=NULL) {
        Node* temp2=temp1;
        while(temp2->next!=NULL) {
            if(temp2->next->val==temp1->val) {
                Node* nodeToDelete=temp2->next;
                temp2->next=temp2->next->next;
                delete(nodeToDelete);
            } else {
                temp2=temp2->next;
            }
        }
         temp1=temp1->next;
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
    tail=newNode;
}
void print_linked_list(Node* &head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
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
    delete_duplicate(head);
    print_linked_list(head);
    return 0;
}