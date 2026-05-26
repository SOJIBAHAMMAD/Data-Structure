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
class myStack{
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
            if(head==NULL) {
                tail==NULL;
                return;
            }
            Node* nodeToDelete=tail;
            tail=tail->prev;
            delete nodeToDelete;
            if(head==NULL) {
                tail==NULL;
                return;
            }
            tail->next=NULL;
        }
        int top() {
           return tail->val;
        }

        int size() {
            return sz;
        }

        bool empty() {
            if(head==NULL) {
                return true;
            } else {
                return false;
            }

            //or
            // return head==NULL;
        }
};
int main () {
    myStack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int val;
        cin>>val;
        st.push(val);
    }
    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}