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

node *inorder_next(node *root)
{
    node *current = root;
    while (current && current->left != NULL) //-------------expt
    {
        current = current->left;
    }
    return current;
}

node *deletion(node *root, int key)
{
    if (key > root->data)
    {
        root->right = deletion(root->right, key);
    }
    else if (key < root->data)
    {
        root->left = deletion(root->left, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        else
        { // case 3
            node *temp = inorder_next(root->right);
            root->data = temp->data;
            root->right = deletion(root->right, temp->data);
        }
    }
    return root;
}

int main()
{
    int arr[] = {5, 6, 9, 7, 3, 4, 10, 8};
    node *root = NULL;
    for (int i = 0; i < 8; i++)
    {
        root = insert(root, arr[i]);
    }

    // inorder(root);
    node* newroot = deletion(root , 9);
    inorder (newroot);

    return 0;
}