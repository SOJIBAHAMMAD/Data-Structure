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
class myQueue{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;

    void push(int val) {
        Node* newNode=new Node(val);
        sz++;
        if(head==NULL) {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }

    void pop() {
        sz--;
        Node* nodeTodelete=head;
        head=head->next;
        delete nodeTodelete;
        if(head==NULL) {
            tail=NULL;
            return;
        }
        head->prev=NULL;
    }

    int front() {
        return head->val;
    }

    int back() {
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return head==NULL;
    }

};
int main () {
    myQueue qu;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int val;
        cin>>val;
        qu.push(val);
    }
    //cout<<qu.front()<<" "<<qu.back()<<" "<<qu.size()<<endl;
    while(!qu.empty()) {
        cout<<qu.front()<<" ";
        qu.pop();
    }
    return 0;
}