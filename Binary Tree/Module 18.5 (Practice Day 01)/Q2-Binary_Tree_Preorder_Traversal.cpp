class Solution {
public:
    vector<int>ans;
    void preOrder_traversal(TreeNode* root) {
        if(root==NULL) {
            return;
        }
        ans.push_back(root->val);
        preOrder_traversal(root->left);
        preOrder_traversal(root->right);

    }
    vector<int> preorderTraversal(TreeNode* root) {
        preOrder_traversal(root);
        return ans;
    }
};