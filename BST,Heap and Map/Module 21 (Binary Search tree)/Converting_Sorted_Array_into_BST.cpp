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
Node* convert(int arr[],int n,int l,int r) {
    if(l > r) {
        return NULL;
    }
    int mid=(l+r)/2;
    Node* root=new Node(arr[mid]);
    Node* left_node = convert(arr,n,l,mid-1);
    Node* right_node = convert(arr,n,mid+1,r);
    root->left = left_node;
    root->right = right_node;
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
int main () {
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    Node* root = convert(arr,n,0,n-1);
    level_order_traversal(root);
    return 0;
}
