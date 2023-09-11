#include<iostream>
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

void prtsubtree(node* root ,int k){
    if(root==NULL){
        return ;
    }
    if(k==0){
        cout<<root->data<<" "<<endl;
    }
    prtsubtree(root->left , k-1);
    prtsubtree(root->right ,k-1);

}
int main( ){

    

return 0 ;
}