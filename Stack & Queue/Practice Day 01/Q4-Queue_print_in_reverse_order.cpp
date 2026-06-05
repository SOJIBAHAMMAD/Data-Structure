/*
Question: Take a queue of size N as input. You need to copy those elements in another 
queue in reverse order. You might use stack here. You should use STL to solve this problem. 
After copying in another queue, print the elements of that queue.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
    queue<int>qu;
    int M;
    cin>>M;
    for(int i=0;i<M;i++) {
        int val;
        cin>>val;
        qu.push(val);
    }

    stack<int>st;
    while(!qu.empty()) {
        st.push(qu.front());
        qu.pop();
    }

    queue<int>qu2;

    while(!st.empty()) {
        qu2.push(st.top());
        st.pop();
    }

    while(!qu2.empty()) {
        cout<<qu2.front()<<" ";
        qu2.pop();
    }
    return 0;
}