/************************************************************

    Following is the Binary Tree node structure

    template <typename T>
    class BinaryTreeNode
    {
        public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data)
        {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root==NULL) {
        return false;
    }
    queue<BinaryTreeNode<int>*>q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int>* f=q.front();
        q.pop();
        if(f->data==x) {
            return true;
        }

        if(f->left!=NULL) {
            q.push(f->left);
        }
        if(f->right!=NULL) {
            q.push(f->right);
        }
    }
    return false;
}
