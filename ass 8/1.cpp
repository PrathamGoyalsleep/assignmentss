#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        right = left = NULL;
    }
};
static int indx = -1;
node *buildtree(vector<int> &preoorder)
{
    indx++;
    if (preoorder[indx] == -1)
    {
        return NULL;
    }
    node *root = new node(preoorder[indx]);
    root->left = buildtree(preoorder);
    root->right = buildtree(preoorder);
    return root;
}
// preorder traversal
void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
// postorder traversal
void postorder(node *root)
{
    if (root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
// inorder traversal
void inorder(node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    vector<int> preoorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    node *root = buildtree(preoorder);
    preorder(root);
    cout << endl;
    inorder(root);
    return 0;
}