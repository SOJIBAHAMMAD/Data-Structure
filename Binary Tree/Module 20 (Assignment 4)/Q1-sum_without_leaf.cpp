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
    int val;
    cin>>val;
    Node* root;
    if(val==-1) {
        root=NULL;
    } else {
        root=new Node(val);
    }

    queue<Node*>q;
    q.push(root);
    while(!q.empty()) {
        Node* f=q.front();
        q.pop();
        Node* myLeft,*myRight;
        int l,r;cin>>l>>r;
        if(l==-1) {
            myLeft=NULL;
        } else {
            myLeft=new Node(l);
        }

        if(r==-1) {
            myRight=NULL;
        } else {
            myRight=new Node(r);
        }

        f->left=myLeft;
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
int sum_without_leaf(Node* root) {
    int count=0;
    if(root==NULL) {
        return 0;
    }
    if(root->left==NULL && root->right==NULL) {
        return 0;
    }
    count+=root->val;
    count+=sum_without_leaf(root->left);
    count+=sum_without_leaf(root->right);
    return count;
}
int main () {
    Node* root=input_tree();
    cout<<sum_without_leaf(root)<<endl;
    return 0;
}
