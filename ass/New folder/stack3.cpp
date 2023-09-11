#include <iostream>
#include <string>
using namespace std;

template <class t>
struct node
{
  t data;
  node<t> *next;
  node(t val)
  {
    data = val;
    next = NULL;
  }
};

template <class t>
class stack
{
  node<t> *top;

public:
  stack()
  {
    top = NULL;
  }
  void push(t val)
  {
    node<t> *n = new node(val);
    n->next = top;
    top = n;
  }
  t pop()
  {
    node<t> *temp = top;
    top = top->next;
    t n = temp->data;
    delete temp;
    return n;
  }
  bool isempty()
  {
    if (top == NULL)
    {
      return 1;
    }
    else
    {
      return 0;
    }
  }
  t topdata()
  {
    return top->data;
  }
};

int prec(char x)
{
  if (x == '+' || x == '-')
  {
    return 1;
  }
  else if (x == '*' || x == '/')
  {
    return 2;
  }
  else if (x == '^')
  {
    return 3;
  }
  else
  {
    return 0;
  }
}

string infi_post(string infix)
{
  stack<char> st;
  string ans;
  for (int i = 0; i < infix.length(); i++)
  {
    char tok = infix[i];
    if (isalnum(tok))
    {
      ans += tok;
    }
    else
    {
      if (tok == '(')
      {
        st.push(tok);
      }
      else if (tok == ')')
      {
        while (st.topdata() != '(')
        {
          ans += st.pop();
        }
        st.pop();
      }
      else
      {
        while (!st.isempty() && prec(st.topdata()) >= prec(tok))
        {
          ans += st.pop();
        }
        st.push(tok);
      }
    }
  }
  while (!st.isempty())
  {
    ans += st.pop();
  }
  return ans;
}

string reverse(string str)
{
  string ans;
  for (int i = str.length(); i >= 0; i--)
  {
    if (str[i] == '(')
    {
      ans += ')';
    }
    else if (str[i] == ')')
    {
      ans += '(';
    }
    else
    {
      ans += str[i];
    }
  }
  return ans;
}

string infi_pref(string infi)
{
  string pref = reverse(infi);
  pref = infi_post(pref);
  pref = reverse(pref);
  return pref;
}

int evaluate(int p1, int p2, char x)
{
  switch (x)
  {
  case '+':
  {
    return (p1 + p2);
    break;
  }
  case '-':
  {
    return (p1 - p2);
    break;
  }
  case '*':
  {
    return (p1 * p2);
    break;
  }
  case '/':
  {
    return (p1 / p2);
    break;
  }
  }
}

// void eval_post(string post)
// {
//   stack<int> st;
//   for (int i = 0; i < post.length(); i++)
//   {
//     char tok = post[i];
//     if (isalnum(tok))
//     {
//       int x;
//       cout << "\nenter value of " << tok;
//       cin >> x;
//       st.push(x);
//     }
//     else
//     {
//       int p1, p2;
//       p2 = st.pop();
//       p1 = st.pop();
//       int result = evaluate(p1, p2, tok);
//       st.push(result);
//     }
//   }
//   cout << post << " = " << st.pop() << endl;
// }

void eval_post(string post){
  stack<char> st;
  int res;
  for (int i = 0; i < post.length(); i++)
  {
    char temp = post[i];
    if (isalnum(temp))
    {
      int x;
      cout<<"enter vvalue of "<<temp;
      cin>>x;
      st.push(char(x));
    }
    else{
      int op2 = st.topdata();
      st.pop();
      int op1 = st.topdata();
      st.pop();
      res = evaluate(op1 , op2 ,temp);
      st.push(char(res)); 
    }
  }
  res = st.pop();
  cout<<"value is : "<<res;
}

void eval_pref(string pref)
{
  // string ans = reverse(pref);
  // cout<<ans;
  stack<int> st;
  for (int i = pref.length()-1; i >= -1; i--)
  {
    char tok = pref[i];
    if (isalnum(tok))
    {
      int x;
      cout << "\nenter value of " << tok;
      cin >> x;
      st.push(x);
    }
    else
    {
      int p1, p2;
      p2 = st.pop();
      p1 = st.pop();
      int res = evaluate(p1, p2, tok);
      st.push(res);
    }
    if (i == 0)
    {
      cout<<"🫰";
    }
    
  }
  cout << pref << " = " << st.pop() << endl;
}

int main()
{
  string infix = "(a+b)*(c-d)";
  string post = infi_post(infix);
  eval_post(post);
  // string prefix = infi_pref(infix);
  // eval_post(post);
  return 0;
}
