#include <iostream>
using namespace std;

void per(string s, string ans)
{

    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < s.length(); i++)
    {
        char fix = s[i];
        string rest = s.substr(0, i) + s.substr(i + 1);
        per(rest, ans + fix);
    }
}

// print all permutations of a string
int main()
{
    string s;
    cin >> s;
    per(s, "");

    return 0;
}