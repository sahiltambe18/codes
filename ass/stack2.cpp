#include<iostream>
#include<stack>
using namespace std;

struct node
{
    char data;
    node* next;
    node(char val){
        data = val;
        next = NULL;
    }
};

class stack1{
    node* top;
    public:
    stack1(){
        top = NULL;
    }
    void push(char val){
        node* n = new node(val);
        n->next = top;
        top = n;
    }
    char pop(){
        char temp = top->data;
        node* todel = top;
        top = top->next;
        delete todel;
        return temp;
    }
    bool isempty(){
        if (top == NULL)
        {
            return 1;
        }
        return 0;
    }
    char topdata(){
        return top->data;
    }
};

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string postfix(string infi){
    stack1 st;
    string post;
    for (int i = 0; i < infi.length(); i++)
    {
        char tok = infi[i];
        if (isalnum(tok))
        {
            post+= tok;
        }
        else{
            if (tok=='(')
            {
                st.push(tok);
            }
            else if (tok==')')
            {
                while (st.topdata() !='(' )
                {
                    post+=st.pop();
                }
                st.pop();
            }
            else{
                while (!st.isempty() && prec(tok) <= prec(st.topdata()))
                {
                    post += st.pop();
                }
                st.push(tok);
            }
        }
    }
    while (!st.isempty())
    {
        post+= st.pop();
    }
    cout<<"postfix :- "<<post<<endl;
    return post;
}

string reverse(string a){
    string ans ;
    
    for ( int i = a.length() ; i >=0; i--)
    {
        if (a[i] == '(')
        {
            ans+= ')';
        }
        else if (a[i] == ')')
        {
            ans+= '(';
        }
        else
        {
            ans+= a[i];
        }
    }
    cout<<ans<<"\n";
    return ans;
}

string prefix(string infi){
    string rev = reverse(infi);
    rev = postfix(rev);
    rev = reverse(rev);
    cout<<rev<<endl;
    return rev;
}

int evaluate(int op1, int op2, char op)
{
    if (op == '+')
        return op1 + op2;
    if (op == '-')
        return op1 - op2;
    if (op == '*')
        return op1 * op2;
    if (op == '/')
        return op1 / op2;
    if (op = '%')
        return op1 % op2;
}

void postfix_eval(string post){
    stack<int> st;
    for (int i = 0; i < post.length(); i++)
    {
        char tok = post[i];
        if (isalnum(tok))
        {
            int x;
            cout<<"enter value of : "<<tok<<endl;
            cin>>x;
            st.push(x);
        }
        else{
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            st.push(evaluate(op1 , op2 ,tok));
        }
    }
    cout<<"result : "<<st.top();
}

void prefix_eval(string pref){

    stack<int> st;
    for ( int i = pref.length()-1; i >=0 ; i--)
    {cout<<i;
        // char tok = pref[i];
        // if (isalnum(tok))
        // {
        //     int x;
        //     cout<<"enter value of "<<tok<<endl;
        //     cin>>x;
        //     st.push(x);
        // }
        // else{
        //     int op2 = st.top();
        //     st.pop();
        //     int op1 = st.top();
        //     st.pop();
        //     st.push(evaluate(op1 ,op2 ,tok));
        // }
        char tok = pref[i];
        if (isalnum(tok))
        {
            int x;
            cout<<"enter value of : "<<tok<<endl;
            cin>>x;
            st.push(x);
        }
        else{
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();
            st.push(evaluate(op1 , op2 ,tok));
        }
    }
    cout<<"result : "<<st.top()<<endl;
}

int main( )
  {
    postfix("(a+b)*(c-d)");
    // reverse("(sah)il)");
   // prefix("(a+b)*(c-d)");
   // postfix_eval("ab+cd-*");
   prefix_eval("*-cd+ab");
return 0 ;
}