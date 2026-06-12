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
class myQueue {
    public:
    list<int>l;

    void push(int val) {
        l.push_back(val);
    }

    void pop() {
        l.pop_front();
    }

    int size() {
        return l.size();
    }

    int front() {
        return l.front();
    }

    int back() {
        return l.back();
    }
        
    bool empty() {
        return l.empty();
    }
};
int main () {
    int N,M;
    cin>>N>>M;
    myStack A;
    for(int i=0;i<N;i++) {
        int val;
        cin>>val;
        A.push(val);
    }
    myQueue B;
    for(int i=0;i<M;i++) {
        int val;
        cin>>val;
        B.push(val);
    }

    int size1=A.size();
    int size2=B.size();
    bool flag=true;
    if(size1==size2) {
        while(!A.empty() && !B.empty()) {
            if(A.top()!=B.front()) {
                flag=false;
                break;
            }
            A.pop();
            B.pop();
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