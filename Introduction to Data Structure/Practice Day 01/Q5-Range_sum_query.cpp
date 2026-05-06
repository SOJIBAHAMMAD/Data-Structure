#include<bits/stdc++.h>
using namespace std;
int main () {
    int N,Q;
    cin>>N>>Q;
    vector<int>A(N);
    for(int i=1;i<=N;i++) {
        cin>>A[i];
    }
    while(Q--) {
        int count=0;
        int L,R;
        cin>>L>>R;
        for(int i=L;i<=R;i++) {
            count+=A[i];
        }
        cout<<count<<endl;
    }
    return 0;
}
// Time Complexity is O(N*Q).
// Get TLE. So i have to optimize the code for best Time Complexity