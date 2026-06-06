/*
Question: Take two stacks of size N and M as input and check if both of 
them are the same or not. Don’t use STL stack to solve this problem.
*/

#include<bits/stdc++.h>
using namespace std;
class myStack {
    public:
    list<int>l;

    void push(int val) {
        l.push_back(val);
    }

    void pop() {
        l.pop_back();
    }

    int top() {
        return l.back();
    }

    bool empty() {
        return l.empty();
    }

    int size() {
        return l.size();
    }
};
int main () {
    myStack st1;
    int N;
    cin>>N;
    for(int i=0;i<N;i++) {
        int val;
        cin>>val;
        st1.push(val);
    }

    myStack st2;
    int M;
    cin>>M;
    for(int i=0;i<M;i++) {
        int val;
        cin>>val;
        st2.push(val);
    }

    int size1=st1.size();
    int size2=st2.size();
    bool flag=true;
    if(size1==size2) {
        while(!st1.empty() && !st2.empty()) {
        if(st1.top()!=st2.top()) {
            flag=false;
            break;
        }
        st1.pop();
        st2.pop();
        }
    } else {
        flag=false;
    }
    
    if(flag) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}
