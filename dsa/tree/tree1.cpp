#include<iostream>

struct node
{
    int data ;
    node* left ;
    node* right ;
    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


using namespace std;
int main( )
  {
    node* root = new node(1);                     //        1
                                               //         /   \ 
    root->left = new node(2);                 //        2      3
    root->left = new node(3);               //        /  \          
                                         //        4     5      
    root->left->left = new node(4);
    root->left->right = new node(5);

    root->right->left = new node(6);
    root->right->right = new node(7);



return 0 ;
}