#include<bits/stdc++.h>
using namespace std;
int main () {
    int N,M;
    cin>>N>>M;
    stack<int>A;
    for(int i=0;i<N;i++) {
        int val;
        cin>>val;
        A.push(val);
    }
    queue<int>B;
    for(int i=0;i<M;i++) {
        int val;
        cin>>val;
        B.push(val);
    }
    bool flag=true;
    int size_A=A.size();
    int size_B=B.size();
    if(size_A==size_B) {
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
