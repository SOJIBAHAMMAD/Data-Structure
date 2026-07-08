#include <bits/stdc++.h> 
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*,int>>q;
    if(root!=NULL) {
        q.push({root,1});
    }
    while(!q.empty()) {
        // pura pair ke alada kore anlam
        pair<TreeNode<int>*,int> parent=q.front();
        q.pop();

        // node ke alada kore rakhlam
        TreeNode<int>* node=parent.first;
        int level=parent.second;  //  level ke alada kore raklam
 
        if(node->val==searchedValue) {
            return level;
        }

        // children pusing
        if(node->left!=NULL) {
            q.push({node->left,level+1});
        }
        if(node->right!=NULL) {
            q.push({node->right,level+1});
        }
    }
}