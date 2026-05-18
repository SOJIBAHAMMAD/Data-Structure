#include<bits/stdc++.h>
using namespace std;
int main () {

    // way 0

    // list<int>l={1,2,3,4,5};



    // way 1

    // list<int>l;

    // way 2

    // list<int>l(5); size of list is 5

    // way 3
    list<int>l(5,2);    // size of list is 5 and every element is 2.
    for(auto it : l) {
        cout<<it<<" ";
    }

    // int a[5]={12,2,3,4};
    // vector<int>v={2,3,4,5,6};

    // list<int>L2(l);
    //list<int>L2(a,a+5);
    //list<int>L2(v.begin(),v.end());

    return 0;
}
