#include<bits/stdc++.h>
using namespace std;
int main () {
    int T;
    cin>>T;
    while(T--) {
        int N;
        cin>>N;
        vector<int>A(N);
        for(int i=0;i<N;i++) {
            cin>>A[i];
        }
        bool flag=true;
        for(int i=0;i<N-1;i++) {
            if(A[i]>A[i+1]) {
                flag=false;
                break;
            }
        }
        if(flag) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}