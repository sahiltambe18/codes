#include <iostream>
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
    node *n = new node(val);
    if (root == NULL)
    {
        root = n;
        return root;
    }
    if (val > root->data)
    {
        root->right = insert(root->right, val);
    }
    else
    {
        root->left = insert(root->left, val);
    }
    return root;
}
void display(node *root)
{
    if (root != NULL)
    {
        display(root->left);
        cout << root->data << " ";
        display(root->right);
    }
}
bool search(node *root, int key)
{
    if (root == NULL)
    {
        cout << "element not found\n";
        return 0;
    }
    if (root->data == key)
    {
        cout << "element found\n";
        return 1;
    }
    else
    {
        if (root->data < key)
        {
            return search(root->right, key);
        }
        else
        {
            return search(root->left, key);
        }
    }
}
node *successor(node *root)
{
    node *temp = root;
    while (temp && temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}
node *deletion(node *root, int key)
{
    if (root->data > key)
    {
        root->left = deletion(root->left, key);
        return root;
    }
    if (root->data < key)
    {
        root->right = deletion(root->right, key);
        return root;
    }
    else
    {
        // element found
        node *temp = root;
        if (root->left && root->right == NULL) // leaf node
        {
            delete root;
            return NULL;
        }
        // one child is present
        if (root->left != NULL && root->right == NULL)
        {
            temp = root->left;
            delete root;
            return temp;
        }
        if (root->left == NULL && root->right != NULL)
        {
            temp = root->right;
            delete root;
            return temp;
        }

        // both childs are present

        temp = successor(root->right);
        root->data = temp->data;
        root->right = deletion(root->right, temp->data);
        return root;
    }

    return root;
}
node *copy(node* root){
    if (root == NULL)
    {
        return NULL;
    }
    node* temp = new node(root->data);
    temp->left = copy(root->left);
    temp->right = copy(root->right); 
    return temp;
}
node *mirror(node*root){
    if (root == NULL)
    {
        return NULL;
    }
    node *temp = root->left;
    root->left = mirror(root->right);
    root->right = mirror(temp);
    return temp;
}
void leaf(node* root){
    if (root == NULL)
    {
        return;
    }
    
    if (root->left ==NULL && root->right == NULL)
    {
        cout<<root->data<<" ";
        return;
    }
    leaf(root->left);
    leaf(root->right);
    // cout<<endl;
}
int main()
{

    /*
             5
          /    \
        3       7
      /  \    /  \
     2    4  6    8
    */
    node *root = NULL;
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 2);
    root = insert(root, 7);
    root = insert(root, 6);
    root = insert(root, 8);
    display(root);
    root = deletion(root , 8);
    display(root);
    // search(root, 6);
    // cout << endl;
    // root = deletion(root, 8);
    // display(root);
    // cout << endl;
    // leaf(root);
    return 0;
}