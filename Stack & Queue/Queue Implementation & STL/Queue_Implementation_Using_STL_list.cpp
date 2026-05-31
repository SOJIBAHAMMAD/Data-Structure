#include<bits/stdc++.h>
using namespace std;
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
    myQueue qu;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int val;
        cin>>val;
        qu.push(val);
    }
    while(!qu.empty()) {
        cout<<qu.front()<<" ";
        qu.pop();
    }
    return 0;
}