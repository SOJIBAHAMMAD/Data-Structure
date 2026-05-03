#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i*i<n;i++)
    {
        sum += i;
    }

    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        sum += i;
        i*=k;
    }



    return 0;
}

// Time Complexity -> O(sqrt(n))+ O(log(k base)(n))

// So finally TC is O(sqrt(n))