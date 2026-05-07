#include<bits/stdc++.h>
using namespace std;
int main () {
    int N;
    cin>>N;
    vector<int>A(N);
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    bool flag=false;
    for(int i=0;i<N-1;i++) {
        if(A[i]==A[i+1]) {
            flag=true;
            break;
        }
    }
    if(flag) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}
