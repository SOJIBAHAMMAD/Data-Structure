#include<bits/stdc++.h>
using namespace std;
int main () {
    list<int>l={2,3,4,3,6,3,8,9};
    list<int>l2;
    l2=l;

    // 1. or l2.assign(l.begin(),l.end());

    l2.push_back(10);       // these two will add 2 element in the list one is tail and another is head.
    l2.push_front(1);

    l2.pop_back();          // these two will delete 2 element in the list one from tail and another from head.
    l2.pop_front();


    // 2.Any element access
    // cout<< *next(l2.begin(),3)<<endl;

    //3.Insert at any position

    list<int>l3={10,20,30,40};

    // l2.insert(next(l2.begin(),3),100);  // There is no direct indexing in list so we use next function.

    //l2.insert(next(l2.begin(),3),l3.begin(),l3.end());


    //4.for deleting single value.
    //l2.erase(next(l2.begin(),3));

    //5.for deleting multiple value
    //l2.erase(next(l2.begin(),2) , next(l2.begin(),5));

    //6.Replace function 
    //replace(l2.begin(),l2.end(),3,10);

    //7.Find function
    // auto it=find(l2.begin(),l2.end(),100);
    // if(it==l2.end()) {
    //     cout<<"Not found"<<endl;
    // } else {
    //     cout<<"Found"<<endl;
    // }
    for(auto it : l2) {
        cout<<it<<" ";
    }
    return 0;
}