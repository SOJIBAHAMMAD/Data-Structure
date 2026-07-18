vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>ans;
    bool freq[3005]={false};
    queue<pair<TreeNode<int>*,int>>q;
    if(root!=NULL) {
        q.push({root,1});
    }
    while(!q.empty()) {
        pair<TreeNode<int>*,int> parent=q.front();
        q.pop();
        TreeNode<int>* node=parent.first;
        int level=parent.second;

        if(freq[level]==false) {
            ans.push_back(node->data);
            freq[level]=true;
        }

        if(node->left!=NULL) {
            q.push({node->left,level+1});
        }
        if(node->right!=NULL) {
            q.push({node->right,level+1});
        }
    }
    return ans;
}