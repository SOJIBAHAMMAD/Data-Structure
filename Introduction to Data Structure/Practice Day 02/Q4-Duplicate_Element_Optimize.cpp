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
    bool flag=false;
    for(int i=0;i<n-1;i++) {
        if(v[i]==v[i+1]) {
            flag=true;
            break;
        }
    }
    if(flag) {
        cout<<"Have a duplicate"<<endl;
    } else {
        cout<<"NO duplicate"<<endl;
    }
    return 0;
}