#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    // transform elements in string to all upper case or lower case
    string s = "ahJddNkje";
    cout << 'a' - 'A' << endl; // = 32
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i]<'z')
        {
            s[i] -= 32;
        }
    }
    cout << s<<endl;
    s.append("addf");
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]<= 'Z' && s[i]>='A')
        {
            s[i]+=32;
        }
        
    }
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(), :: toupper);
    cout<<s;
    cout<<"build max no"<<endl;
    /// form a max no from string
    string num = "95644564598";
    sort(num.begin(),num.end(), greater<int>());
    cout<<"max no is : "<<num<<endl;

    return 0;
}