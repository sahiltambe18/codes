#include<iostream>
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

void inorder(node* root ){
    if (root != NULL)
    {
        inorder(root->left);
        cout<<root->data <<" ";
        inorder(root->right);
    }
}

void preorder(node* root){
    if (root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
    
}

node* from_prorder(node* root , int preorder[] , int l){
    for (int i = 0; i < l; i++)
    {
        root = insert(root , preorder[i]);
    }
       return root;
}

int main( )
  {
    int arr[] = {7,5,4,6,8,9};
    node* root = NULL;
    root = from_prorder(root , arr , 6);
    preorder(root);
    // inorder(root);

return 0 ;
}