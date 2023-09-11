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

node *buildtree(int pre[], int inor[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }

    int curr = pre[idx];
    node *root = new node(curr);
    if (start == end)
    {
        return root;
    }
    idx++;

    int pos = search(inor, start, end, curr);
    root->left = buildtree(pre, inor, start, pos - 1);
    root->right = buildtree(pre, inor, pos + 1, end);
    return root;
}

void inorder(node* root){
    if (root== NULL)
    {
        return;
    }
    
    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}

int main()
{
    int pre[] = {1, 2, 4, 5, 3, 6, 7};
    int inor[] = {4, 2, 5, 1, 6, 3, 7};
    node* root = buildtree(pre , inor , 0 ,6);
    inorder(root);

    return 0;
}