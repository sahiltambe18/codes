#include<iostream>
#include<string.h>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
bool isvalid(string s){
    int l = s.length();
    bool ans = true ;
    stack<char> st ;
    for (int i = 0; i < l; i++)
    {
        if (s[i]=='{' || s[i]=='(' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else if (s[i]==']')
        {
            if (!st.empty() and st.top()=='[')
            {
                st.pop();
            }
            else{
                ans = false ;
                break;
            }
            
        }
        else if (s[i]==')')
        {
            if (!st.empty() and st.top()=='(')
            {
                st.pop();
            }
            else{
                ans = false ;
                break;
            }
            
        }
        else if (s[i]=='}')
        {
            if (!st.empty() and st.top()=='{')
            {
                st.pop();
            }
            else{
                ans = false ;
                break;
            }
            
        }
        
        
    }
    if (!st.empty())
    {
        return false ;
    }
    return ans ;
    
    
}
int main( )
  {
    string s = "{[()]}";
    if (isvalid(s))
    {
        cout<<"valid string"<<endl;
    }
    else{
        cout<<"invalidstring"<<endl;
    }
    

return 0 ;
}