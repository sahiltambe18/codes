#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isbalenced(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (!st.empty() && s[i] == ')')
            {
                if (st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            if (!st.empty() && s[i] == '}')
            {
                if (st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            if (!st.empty() && s[i] == ']')
            {
                if (st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    if (!st.empty())
    {
        return false ;
    }
    else{
        return true ;
    }
    
}


int main()
{
    string s = "{[)]}";
    cout << isbalenced(s);

    return 0;
}