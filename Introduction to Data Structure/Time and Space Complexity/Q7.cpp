#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        sort(a,a+n);
    }

    return 0;
}

// Time Complexity -> O(n*nlog(n)