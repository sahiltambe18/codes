#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void sumreplace(node *root)
{
    if (root == NULL)
    {
        return;
    }
    sumreplace(root->left);
    sumreplace(root->right);

    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    /*  root->left->left->left = new node(8);
      root->left->left->right = new node(9);
      root->left->right->left = new node(10);
      root->left->right->right = new node(11);

      root->right->left->left = new node(12);
      root->right->left->right = new node(13);
      root->right->right->left = new node(14);
      root->right->right->right = new node(15);*/
    preorder(root);
    sumreplace(root);
    cout << endl;
    preorder(root);

    return 0;
}