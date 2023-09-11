#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// sorted array to bst

node *arr_to_bst(int arr[], int start, int end)
{

    if (start > end)
    {
        return NULL;
    }
    int mid = (start + end) / 2;
    node *root = new node(arr[mid]);
    root->left = arr_to_bst(arr, start, mid - 1);
    root->right = arr_to_bst(arr, mid + 1, end);

    return root;
}

void preorder(node *root)
{
    if (root != NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    node *root = arr_to_bst(arr, 0, 4);
    preorder(root);

    return 0;
}