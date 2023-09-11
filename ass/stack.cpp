#include<iostream>
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

class stack{
    node* top;
    public:
    stack(){
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
void postfix(char infi[] ,char post[]){
    int ans =0;
    stack st;
    for (int i = 0; infi[i]!='\0' ; i++)
    {
        char tok = infi[i];
        if (isalnum(tok))
        {
            post[ans] = tok;
            ans++;
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
                    post[ans]=st.pop();
                    ans++;
                }
                st.pop();
            }
            else{
                while (!st.isempty() && prec(tok) <= prec(st.topdata()))
                {
                    post[ans] = st.pop();
                    ans++;
                }
                st.push(tok);
            }
        }
    }
    while (!st.isempty())
    {
        post[ans] = st.pop();
        ans++;
    }
    post[ans]='\n';
    // for (int i = 0; i <= ans; i++)
    // {
    //     cout<<post[i];
    // }
    // cout<<endl;
}

void reverse(char a[] , char b[]){
    int i , j;
    for ( i = 0; a[i] != '\0'; i++)
    {
        
    }i--;
    for ( j = 0; i >=0; j++ ,i--)
    {
        if (a[i] == '(')
        {
            b[j] = ')';
        }
        else if (a[i]==')')
        {
            b[j] = '(';
        }
        else
        {
            b[j] = a[i];
        }
    } 
    j++;
    b[j]='\n';
}

void prefix(char infi[] , char pref[]){
    char rev1[20] , rev2[20];
    reverse(infi , rev1);
    postfix(rev1 , rev2);
    reverse(rev2 ,pref);
}

int evaluate(int op1 , int op2 , char x){
    if (x == '+')
    {
        return (op1+op2);
    }
    else if (x == '-')
    {
        return (op1-op2);
    }
    else if (x == '*')
    {
        return (op1*op2);
    }
    else if (x == '/')
    {
        return (op1/op2);
    }
}

void eval_post(char post[]){
   stack s;
    int i, op1, op2, result;
    char token;
    int x;
    for (i = 0; post[i] != '\0'; i++)
    {
        token = post[i];
        if (isalnum(token))
        {
            cout << "enter the value" << token;
            cin >> x;
            s.push(char(x));
        }
        else
        {
            op2 = s.pop();
            op1 = s.pop();
            result = evaluate(op1, op2, token);
            s.push(char(result));
        }
    }
    result = s.pop();
    cout << "result=" << result;
}

int main( )
  {
    char infi[20] , post[20] , pref[20];
    cout<<"enter infix\n";
    cin>>infi;
    postfix(infi ,post);
    cout<<"\npostfix : "<<post<<endl;
    eval_post(post); 
    // prefix(infi , pref);
    // cout<<"\nprefix : "<<pref<<endl;
    
return 0 ;
}