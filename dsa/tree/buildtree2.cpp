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

int search(int inord[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inord[i] == curr)
        {
            return i;
        }
    }
    return -1;
}

node *buildpost(int post[], int inor[], int start, int end)
{
    static int idx = end;
    if (start > end)
    {
        return NULL;
    }

    int curr = post[idx];
    idx--;
    node *root = new node(curr);
    if (start == end)
    {
        return root;
    }

    int pos = search(inor, start, end, curr);
    root->right = buildpost(post, inor, pos + 1, end);
    root->left = buildpost(post, inor, start, pos - 1);
    return root;
}

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    int post[] = {4, 5, 2, 6, 7, 3, 1};
    int inor[] = {4, 2, 5, 1, 6, 3, 7};
    node *root = buildpost(post, inor, 0, 6);
    inorder(root);

    return 0;
}