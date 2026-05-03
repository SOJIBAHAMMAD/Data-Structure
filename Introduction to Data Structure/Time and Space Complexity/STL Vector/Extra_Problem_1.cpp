#include<bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin>>N;
    vector<int>A(N);
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }
    vector<int>B(N);
    for(int i=0;i<N;i++) {
        cin>>B[i];
    }
    vector<int>C;
    C.insert(C.end(),B.begin(),B.end());
    C.insert(C.begin()+N,A.begin(),A.end());
    for(auto x:C) {
        cout<<x<<" ";
    }
    return 0;
}
