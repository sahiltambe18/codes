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

void search(node *root, int key)
{
    if (root != NULL)
    {
        if (root->data == key)
        {
            cout << "element found\n" << endl;
            return;
        }

        if (key < root->data)
        {
            search(root->left, key);
        }
        //   key > data
        if (key > root->data)
        {
            search(root->right, key);
        }
        
    }

        if (root == NULL)
        {cout<<"element not found\n";
        return;}
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
    search(root, 10);

    return 0;
}