class Solution {
public:
    vector<int>ans;
    void inOrder_traversal(TreeNode* root) {
        if(root==NULL) {
            return;
        }
        inOrder_traversal(root->left);
        ans.push_back(root->val);
        inOrder_traversal(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inOrder_traversal(root);
        return ans;
    }
};