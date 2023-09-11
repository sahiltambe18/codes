#include<iostream>
#include<queue>
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

int ksum(node* root , int k){
    if (root==NULL)
    {
        return -1;
    }
    
    queue<node*> q ;
    q.push(root);
    q.push(NULL);
    int level = 0 ;
    int sum = 0;
    while (!q.empty())
    {
        node* node = q.front();
        q.pop();
        if (node!=NULL)
        {
            if (node->left)
            {
                q.push(node->left);
            }
            if (node->right)
            {
                q.push(node->right);
            }
            if (k==level)
            {
                sum+= node->data;
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
        
        
    }
    return sum;
    
}

int main( )
  {
    struct node* root = new node(1);
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
    cout<< ksum(root , 2);

return 0 ;
}