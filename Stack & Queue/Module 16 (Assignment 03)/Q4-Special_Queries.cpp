#include<bits/stdc++.h>
using namespace std;
int main () {
    int Q;
    cin>>Q;
    queue<string>q;
    while(Q--) {
        int cmd;
        cin>>cmd;
        if(cmd==0) {
            string name;
            cin>>name;
            q.push(name);
        } else if(cmd==1) {
            if(!q.empty()) {
                cout<<q.front()<<endl;
                q.pop();
            } else {
                cout<<"Invalid"<<endl;
            }
        }  
    }
    return 0;
}