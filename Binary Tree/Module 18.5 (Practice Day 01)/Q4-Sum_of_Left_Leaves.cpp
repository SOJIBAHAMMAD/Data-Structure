class Solution {
public:
    int count=0;
    void sum(TreeNode* root) {
        if(root==NULL) {
            return;
        }
        if(root->left!=NULL) {
            if(root->left->left==NULL && root->left->right==NULL) {
                count+=root->left->val;
            }
        }
        sum(root->left);
        sum(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        sum(root);
        return count;
    }
};