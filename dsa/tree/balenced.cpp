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


int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh, rh) + 1;
}

bool isbalenced(node *root)     // o(n^2)
{

    if (root == NULL)
    {
        return true;
    }

    if (isbalenced(root->left) == false)
    {
        return false;
    }
    else if (isbalenced(root->right) == false)
    {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    int diff = abs(lh - rh);
    if (diff <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool ifbalenced(node* root , int* high)  {   // o(n) 
    if (root==NULL)
    {
        return true;
    }
    
    int lh = 0 , rh = 0 ;
    if (ifbalenced(root->left , &lh)== false)
    {
        return false;
    }
    if (ifbalenced(root->right , &rh)==false)
    {
        return false;
    }

    *high = max(lh , rh )+1;
    if (abs(lh - rh)<=1)
    {
        return true ;
    }
    else{
        return false;
    }
    
    
}
int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    // root->right->left = new node(6);
    // root->right->right = new node(7);

    // root->left->left->left = new node(8);
    // root->left->left->right = new node(9);
    // root->left->right->left = new node(10);
    // root->left->right->right = new node(11);

    // root->right->left->left = new node(12);
    // root->right->left->right = new node(13);
    // root->right->right->left = new node(14);
    // root->right->right->right = new node(15);

    node* root2 = new node(1);
    root2->left = new node(1);
    // root2->right = new node(1);
    root2->left->left  = new node(1);
    int high = 0;

    cout<< ifbalenced(root2 , &high );

    return 0;
}