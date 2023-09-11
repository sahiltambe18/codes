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

int count(node *root)
{
    static int sum = 0;
    if (root == NULL)
    {
        return 0;
    }

    count(root->left);
    count(root->right);
    sum++;
    return sum;
}

int countt(node* root){
    if (root==NULL)
    {
        return 0;
    }
    return countt(root->left) + countt(root->right) + 1 ;
    
}

int valuenodes(node* root){
    if (root == NULL)
    {
        return 0;
    }
    
    return valuenodes(root->left) + valuenodes(root->right) + root->data ;
}

int height(node* root){
    if (root == NULL)
    {
        return 0;
    }

    return max(height(root->left) , height(root->right) )+1 ;
    
}

int main()
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
    cout << count(root)<<endl;
    cout << countt(root)<<endl;
    cout<< valuenodes(root)<<endl;
    cout<< height(root);
    return 0;
}