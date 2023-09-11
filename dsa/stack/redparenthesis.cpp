#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
bool red(string s){
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '+' || s[i] == '*' || s[i] == '/' || s[i] == '-')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                st.pop();
                return true;
            }

            while (st.top() == '+' || st.top() == '*' || st.top() == '/' || st.top() == '-')
            {
                st.pop();
            }
            st.pop();
        }
    }return false;
}
int main()
{
    cout << "enter the string" << endl;
    string s;
    cin >> s;
    cout<<red(s);

    return 0;
}