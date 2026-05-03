#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin>>n;
    for(int i=0;i<n;i+=10)
    {
        for(int j=n;j>=0;j--)
        {
            cout << "Hello" << endl;
        }
    }


    for(int i=0;i<n;i++)
    {
        cout << "Hi" << endl;
    }

    return 0;
}

// Time Complexity -> O(n*n)