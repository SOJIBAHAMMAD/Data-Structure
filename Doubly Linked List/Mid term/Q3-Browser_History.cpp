#include<bits/stdc++.h>
using namespace std;
int main () {
    list<string>history;
    while(true) {
        string webpage;
        cin>>webpage;
        if(webpage=="end") {
            break;
        }
        history.push_back(webpage);
    }
    int Q;
    cin>>Q;
    auto current=history.begin();
    while(Q--) {
        string cmd;
        cin>>cmd;
        if(cmd=="visit") {
            string page;
            cin>>page;
            auto isFound =find(history.begin(),history.end(),page);
            if(isFound!=history.end()) {
                cout<<*isFound<<endl;
                current=isFound;
            } else {
                cout<<"Not Available"<<endl;
            }
        } else if(cmd=="next") {
            if(next(current)!=history.end()) {
                current=next(current);
                cout<<*current<<endl;
            } else {
                cout<<"Not Available"<<endl;
            }
        } else if(cmd=="prev") {
            if(current==history.begin()) {
               cout<<"Not Available"<<endl;
            } else {
               current=prev(current);
               cout<<*current<<endl;
            }
        }
    }
    return 0;
}