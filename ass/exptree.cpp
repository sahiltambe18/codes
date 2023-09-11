#include <iostream>
using namespace std;
struct node
{
  char data;
  node *left, *right;
  node(char val)
  {
    data = val;
    left = right = NULL;
  }
};

struct lnode
{
  node *data;
  lnode *next;
  lnode(node *val)
  {
    data = val;
    next = NULL;
  }
};

class stack
{
  lnode *top;

public:
  stack()
  {
    top = NULL;
  }
  void push(node *val)
  {
    lnode *n = new lnode(val);
    if (top == NULL)
    {
      top = n;
      return;
    }
    n->next = top;
    top = n;
  }
  node *pop()
  {
    if (top == NULL)
    {
      return NULL;
    }
    lnode *n = top;
    top = top->next;
    return n->data;
  }
  node *Top()
  {
    return top->data;
  }

  bool isempty()
  {
    if (top == NULL)
    {
      return 1;
    }
    return 0;
  }
};

node *postt(char post[])
{
  stack st;
  node *p;
  for (int i = 0; post[i] != '\0'; i++)
  {
    char token = post[i];
    if (isalnum(token))
    {
      p = new node(token);
      st.push(p);
    }
    else
    {
      p = new node(token);
      p->right = st.pop();
      p->left = st.pop();
      st.push(p);
    }
  }
  return st.pop();
}

node *pree(char pre[])
{
  int i;
  for (i = 0; pre[i] != '\0'; i++)
  {
  }
  i--;
  stack st;
  node *p;
  for (; i >= 0; i--)
  {
    char token = pre[i];
    if (isalnum(token))
    {
      p = new node(token);
      st.push(p);
    }
    else
    {
      p = new node(token);
      p->left = st.pop();
      p->right = st.pop();
      st.push(p);
    }
  }
  return st.pop();
}

void inorder(node *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
  }
}
/* *+ab-cd */

void inorder_nonr(node *root)
{
  node *t = root;
  stack st;
  while (t != NULL)
  {
    st.push(t);
    t = t->left;
  }
  while (!st.isempty())
  {
    t = st.pop();
    cout << t->data << " ";
    t = t->right;
    while (t != NULL)
    {
      st.push(t);
      t = t->left;
    }
  }
}

// void preorder_nonr(node *root)
// {
//   node *t = root;
//   stack st;
//   while (t != NULL)
//   {
//     cout << t->data << " ";
//     st.push(t);
//     t = t->left;
//   }
//   while (!st.isempty())
//   {
//     t = st.pop();
//     t = t->right;
//     while (t != NULL)
//     {
//       cout << t->data << " ";
//       st.push(t);
//       t = t->left;
//     }
//   }
// }

void pre_nonrec(node* root){
    node* temp = root;
    stack st;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        st.push(temp);
        temp = temp->left;
    }
    while (!st.isempty())  
    {
        temp = st.pop();
        temp = temp->right;
        while (temp!=NULL)
        {
        cout<<temp->data<<" ";
          st.push(temp);
          temp = temp->left;
          
        }
        
    }
    
    
}

void inorder_nonrec(node* root){
  node* temp = root;
  stack st;
  while (temp != NULL)
  {
    st.push(temp);
    temp = temp->left;
  }
  
  while (!st.isempty())
  {
    temp = st.pop();
    cout<<temp->data<<" ";
    temp = temp->right;
    while (temp !=NULL)
    {
      st.push(temp);
      temp = temp->left;
    }
    
  }
  

}

void post_non(node* root){
  node* t1,*t2;
  stack s1,s2;
  t1 = root;
  while (t1!=NULL)
  {
    s1.push(t1);
    s2.push(NULL);
    t1 = t1->left;
  }
  while (!s1.isempty())
  {
    t1 = s1.pop();
    t2 = s2.pop();
    if (t2 == NULL)
    {
      s1.push(t1);
      s2.push(NULL);
      t1 = t1->right;
      while (t1!= NULL)
      {
        s1.push(t1);
        s2.push((node*)1);
        t1 = t1->left;
      }
      
    }
    else{
      cout<<t1->data<<" ";
    }
    

  }
  
}

int main()
{
  char post[10];
  cout << "enter ex\n";
  cin >> post;
  node *root = postt(post);
  cout << endl;
  // pre_nonrec(root);
  post_non(root);
  return 0;
}