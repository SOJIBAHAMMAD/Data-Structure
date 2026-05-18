#include<bits/stdc++.h>
using namespace std;
int main () {
    list<int>l={10,10,20,20,10,30,10,40,40,10,50};

    // Type-1.Remove Function
    // l.remove(10);

    // Type-2.Sort Function
    // l.sort();
    // Descending order sort
    //l.sort(greater<int>());


    // Type-3.Unique Function
    // l.unique();  // list must have to sorted

    // Type-4.Reverse function
    // l.reverse();


    for(auto val : l) {
        cout<<val<<" ";
    }
    return 0;
}