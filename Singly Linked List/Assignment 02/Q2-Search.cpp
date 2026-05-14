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
void Searching(Node* &head,int X) {
    Node* temp=head;
    int idx=0;
    bool flag=false;
    while(temp!=NULL) {
        if(temp->val==X) {
            cout<<idx<<endl;
            flag=true;
            break;
        }
        idx++;
        temp=temp->next;
    }
    if(flag==false) {
        cout<<"-1"<<endl;
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
int main () {
    int T;
    cin>>T;
    while(T--) {
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
        int X;
        cin>>X;
        Searching(head,X);
    }
    return 0;
}