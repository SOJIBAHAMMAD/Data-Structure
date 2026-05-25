#include<bits/stdc++.h>
using namespace std;
void forward_print(list<int>&l) {
    cout<<"L -> ";
    for(auto it:l) {
        cout<<it<<" ";
    }
    cout<<endl;
}
void backward_print(list<int>l) {
    l.reverse();
    cout<<"R -> ";
    for(auto it:l) {
        cout<<it<<" ";
    }
    cout<<endl;
}
int main () {
    list<int>l;
    int Q;
    cin>>Q;
    while(Q--) {
        int X,V;
        cin>>X>>V;
        if(X==0) {
            l.push_front(V);
            forward_print(l);
            backward_print(l);
        } else if(X==1) {
            l.push_back(V);
            forward_print(l);
            backward_print(l);
        } else if(X==2) {
            if(V>=0 && V<l.size()) {
                l.erase(next(l.begin(),V));
            }
            forward_print(l);
            backward_print(l); 
        }
    }
    return 0;
}