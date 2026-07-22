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
    int val;cin>>val;
    Node* root;
    if(val==-1) {
        root==NULL;
    } else {
        root=new Node(val);
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()) {
        Node* preant=q.front();
        q.pop();
        int l,r;cin>>l>>r;
        Node* myLeft,*myRight;
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
        preant->left=myLeft;
        preant->right=myRight;
        if(preant->left!=NULL) {
            q.push(preant->left);
        }
        if(preant->right!=NULL) {
            q.push(preant->right);
        }
    }
    return root;
}
void level_order_traversal(Node* root) {
    if(root==NULL) {
        cout<<"No tree"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while(!q.empty()) {
        Node* preant=q.front();
        q.pop();
        cout<<preant->val<<" ";
        if(preant->left!=NULL) {
            q.push(preant->left);
        }
        if(preant->right!=NULL) {
            q.push(preant->right);
        }
    }
}
void insert_Node(Node* &root,int val_to_insert) {
    if (root==NULL) {
        root = new Node(val_to_insert);
    }
    if(root->val > val_to_insert) {
        if(root->left==NULL) {
            root->left= new Node(val_to_insert);
        } else {
            insert_Node(root->left,val_to_insert);
        }
    } else {
        if(root->right==NULL) {
            root->right= new Node(val_to_insert);
        } else {
            insert_Node(root->right,val_to_insert);
        }
    }
}
int main () {
    Node* root=input_tree();
    int val_to_insert;cin>>val_to_insert;
    insert_Node(root,val_to_insert);
    level_order_traversal(root);
    return 0;
}