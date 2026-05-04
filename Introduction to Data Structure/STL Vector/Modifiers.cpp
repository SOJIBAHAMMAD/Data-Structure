#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int> v={1,3,4,5,3,7};
    vector<int>v1={10,20,30};

    // push_back function

    v.push_back(9);
    for(auto val:v) {
        cout<<val <<" ";
    }
    cout<<endl;

    // pop_back function
    v.pop_back();
    for(auto val:v) {
        cout<<val <<" ";
    }
    cout<<endl;

    // insert function
    v.insert(v.begin()+2,5);
    for(auto val:v) {
        cout<<val <<" ";
    }
    cout<<endl;

    v.insert(v.begin()+3,v1.begin(),v1.end());
    for(auto val:v) {
        cout<<val <<" ";
    }
    cout<<endl;

    // erase function

    v.erase(v.begin()+2,v.begin()+5);
    for(auto val:v) {
        cout<<val <<" ";
    }
    cout<<endl;

    // Replace function

    replace(v.begin(),v.end(),3,6);
    for(auto val:v) {
        cout<<val <<" ";
    }
    cout<<endl;

    // find function 

    auto it= find(v.begin(),v.end(),40);
    if(it==v.end()) {
        cout<<"Not found";
    } else {
        cout<<"Found";
    }
    
    return 0;
}