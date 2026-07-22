#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root != NULL)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        Node *myLeft;
        Node *myRight;
        int l, r;
        cin >> l >> r;
        if (l == -1)
        {
            myLeft = NULL;
        }
        else
        {
            myLeft = new Node(l);
        }
        if (r == -1)
        {
            myRight = NULL;
        }
        else
        {
            myRight = new Node(r);
        }

        f->left = myLeft;
        f->right = myRight;

        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
    return root;
}
bool search(Node *root, int val)
{
    if (root == NULL)
    {
        return false;
    }
    if (root->val == val)
    {
        return true;
    }
    if (root->val > val)
    {
        bool l = search(root->left, val);
        return l;
    }
    else
    {
        bool r = search(root->right, val);
        return r;
    }
}
int main()
{
    Node *root = input_tree();
    int val;
    cin >> val;
    bool res = search(root, val);
    if (res == true)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}