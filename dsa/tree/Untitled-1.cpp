#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int search(int inordr[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inordr[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

node *buildtree(int preordr[], int inorder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }

    int curr = preordr[idx];
    idx++;
    node *root = new node(curr);
    if (start == end)
    {
        return root;
    }

    int pos = search(inorder, start, end, curr);

    root->left = buildtree(preordr, inorder, start, pos - 1);
    root->right = buildtree(preordr, inorder, pos + 1, end);
    return root;
}

int main()
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inordr[] = {4, 2, 1, 5, 3};

    node *root = buildtree(preorder, inordr, 0, 4);
    inorder(root);

    return 0;
}