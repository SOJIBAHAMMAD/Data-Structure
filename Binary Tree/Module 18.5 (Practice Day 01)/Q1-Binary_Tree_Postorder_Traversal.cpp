class Solution {
public:
    vector<int>ans;
    void postOrder_traversal(TreeNode* root) {
        if(root==NULL) {
            return;
        }
        postOrder_traversal(root->left);
        postOrder_traversal(root->right);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        postOrder_traversal(root);
        return ans;
    }
};
