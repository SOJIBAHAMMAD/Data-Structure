#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while(q--) {
        int x;
        cin>>x;
        int l=0;
        int r=n-1;
        bool flag=false;
        while(l<=r) {
            int mid=(l+r)/2;
            if(v[mid]==x) {
                flag=true;
                break;
            } else if(v[mid]<x) {
                l=mid+1;
            } else {
                r=mid-1;
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