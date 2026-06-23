#include<bits/stdc++.h>
using namespace std;
class Node {
    public :
        int val;
        Node* left;
        Node* right;

        Node(int val) {
            this->val=val;
            this->left=NULL;
            this->right=NULL;
        }
};
Node* input_tree() {
    int val; cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else {
        root=new Node(val);
    }
    queue<Node*>q;
    q.push(root);

    while(!q.empty()) {
        Node* f=q.front();
        q.pop();

        int l,r;cin>>l>>r;
        Node* myleft;
        Node* myRight;
        if(l==-1) {
            myleft=NULL;
        } else {
            myleft=new Node(l);
        }

        if(r==-1) {
            myRight=NULL;
        } else {
            myRight=new Node(r);
        }

        f->left=myleft;
        f->right=myRight;

        if(f->left!=NULL) {
            q.push(f->left);
        }
        if(f->right!=NULL) {
            q.push(f->right);
        }
    }
    return root;
}
int count_node(Node* root) { // using level order traversing
    int count=0;
    if(root==NULL) {
        cout<<"No tree"<<endl;
        return 0;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()) {
        Node* f=q.front();
        q.pop();
        // cout<<f->val<<" ";
        count++;
        if(f->left!=NULL) {
            q.push(f->left);
        }
        if(f->right!=NULL) {
            q.push(f->right);
        }
    }
    return count;
}
int main () {
    Node* root=input_tree();
    int total_node=count_node(root);
    cout<<total_node<<endl;
    return 0;
}