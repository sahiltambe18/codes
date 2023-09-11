#include<iostream>
#include<stack>
using namespace std;

int prec(char c){
    switch (c)
    {
    case '^':
        return 3;
    case '*':
        return 2;
    case '/':
        return 2;
    case '+':
        return 1;
    case '-':
        return 1;
    
    default:
        return -1;
    }
}
void infitopostfix(string s){
    stack<char> st ;
    string res = ' ';
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]>='0' && s[i]<= '9')
        {
            res+ = s[i];
        }
        else{
            if (s[i]== '(')
            {
                st.push(s[i]);
            }
            else if (!st.empty() && prec(st.top())>)
            {
                /* code */
            }
            
            
        }
        
    }
    
}


int main( )
  {

return 0 ;
}