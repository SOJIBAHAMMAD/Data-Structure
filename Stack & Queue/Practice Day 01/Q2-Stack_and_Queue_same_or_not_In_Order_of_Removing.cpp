/*
Question: Take a stack of size N and a queue of size M as input. Then check if both of 
them are the same or not in the order of removing. You should use STL to solve this problem.
*/

#include<bits/stdc++.h>
using namespace std;
int main () {
    stack<int>st;
    int N;
    cin>>N;
    for(int i=0;i<N;i++) {
        int val;
        cin>>val;
        st.push(val);
    }

    queue<int>qu;
    int M;
    cin>>M;
    for(int i=0;i<M;i++) {
        int val;
        cin>>val;
        qu.push(val);
    }
    int st_sz=st.size();
    int qu_sz=qu.size();
    bool flag=true;
    if(st_sz==qu_sz) {
        while(!st.empty() && !qu.empty()) {
        if(st.top()!=qu.front()) {
            flag=false;
            break;
        }
        st.pop();
        qu.pop();
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