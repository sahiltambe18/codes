#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

node *insert(node *root, int val)
{
    if (root == NULL)
    {
        root = new node(val);
        return root;
    }
    else
    {
        if (val < root->data)
        {
            root->left = insert(root->left, val);
        }
        else
        { // val > data
            root->right = insert(root->right, val);
        }
        return root;
    }
}

void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// to check for bst

bool check_bst(node *root, node *min, node *max)
{
    if (root == NULL)
    {
        return 1;
    }

    if (min != NULL && root->data >= min->data)
    {
        return 0;
    }
    if (max != NULL && root->data <= max->data)
    {
        return 0;
    }

    bool lvalid = check_bst(root->left, root, NULL);
    bool rvalid = check_bst(root->right, NULL, root);
    return lvalid and rvalid;
}
/*
      5
    /  \
        6
       / \
          9
*/

int main()
{
    int arr[] = {5, 6, 9, 7, 3, 4, 10, 8};
    node *root = NULL;
    for (int i = 0; i < 8; i++)
    {
        root = insert(root, arr[i]);
    }
    // root->right->right->right = new node(1);

    inorder(root);
    cout << endl;
    cout << check_bst(root, NULL, NULL);

    return 0;
}