#include<iostream>
#include<string>
#include<stack>

using namespace std;

int prec(char c){
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    else {
        return -1;
    }
    
    
}

string infi_post(string infix){
    char tok;
    stack<char> st;
        string ans;
    for (int i = 0; i < infix.length(); i++)
    {
        tok = infix[i];
        if (tok == '(')
        {
            st.push(tok);
        }
        else if (tok == ')')
        {
            while (st.top() != '(' && !st.empty() )
            {
                ans+= st.top();
                st.pop();
            }st.pop();
        }
        else{
            while (!st.empty() && prec(tok)>= prec(st.top()))
            {
                ans+=st.top();
                st.pop();
            }st.push(tok);
        }
        
        
    }
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout<<ans;
    return ans;
}

string rev(string str){
    string ans;
    for (int i = str.length()-1; i>=0; i--)
    {
        if (str[i]=='(')
        {
            ans+=')';
        }

        else if (str[i]==')')
        {
            ans+='(';    
        }
        else{
            ans+=str[i];
        }
    }
    cout<<ans;
    return ans;
}

int main( )
  {
    string str;
    cout<<"enter ";
    cin>>str;
    cout<<endl;
    rev(str);
    cout<<endl;
    infi_post(str);


return 0 ;
}