#include <iostream>
using namespace std;

// check palindrom
int main()
{
    int n = 5;
    char c[n + 1] = "nitin";
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (c[i] != c[n - 1 - i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "word is palindrome";
    }
    else
    {
        cout << "word is not palindrome";
    }

    return 0;
}