#include<iostream>
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

int height(node* root){
    if (root==NULL)
    {
        return 0;
    }
    return max(height(root->left) , height(root->right))+1;
    
}

int diameter(node* root){
    if (root == NULL)
    {
        return 0;
    }
    
    int lheight = height(root->left);
    int rheight = height(root->right);
    int currdia = lheight + rheight +1;

    int ldia = diameter(root->left);
    int rdia = diameter(root->right);
    return max(currdia , max(ldia , rdia));
}

int caldia(node* root , int* high){
    if (root== NULL)
    {
        *high = 0;
        return 0;
    }
    
    int lh = 0 , rh = 0;

    int ldia = caldia(root->left , &lh);
    int rdia = caldia(root->right , &rh);

    int currdia = lh + rh +1;
    *high = max(lh , rh )+1 ;

    return max(currdia , max(ldia , rdia));
}

int main( )
  {
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);

    root->left->left->left = new node(8);
    root->left->left->right = new node(9);
    root->left->right->left = new node(10);
    root->left->right->right = new node(11);

    root->right->left->left = new node(12);
    root->right->left->right = new node(13);
    root->right->right->left = new node(14);
    root->right->right->right = new node(15);

    cout<< diameter(root)<<endl;
    int high = 0;
    cout<< caldia(root , &high )<<endl;

return 0 ;
}