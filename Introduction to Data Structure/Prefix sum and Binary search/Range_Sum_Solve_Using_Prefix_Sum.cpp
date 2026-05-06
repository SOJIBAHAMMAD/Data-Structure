#include<bits/stdc++.h>
using namespace std;
int main () {
    int N,Q;
    cin>>N>>Q;
    vector<long long int>A(N+1);
    for(int i=1;i<=N;i++) {
        cin>>A[i];
    }
    vector<long long int>pre(N+1);
    pre[1]=A[1];
    for(int i=2;i<=N;i++) {
        pre[i]=pre[i-1]+A[i];
    }
    while(Q--) {
        long long int sum;
        int L,R;
        cin>>L>>R;
        if(L==1) {
            sum=pre[R];
        } else {
            sum=pre[R] - pre[L-1];
        }
        cout<<sum<<endl;
    }
    return 0;
}
