#include <iostream>
using namespace std;
// reverse a string using recursion
void rev(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    string ros = s.substr(1); // this func gives rest of string from index 1
    rev(ros);
    cout << s[0];
}
int main()
{
    rev("oohoo");

    return 0;
}