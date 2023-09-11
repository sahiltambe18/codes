#include <iostream>
using namespace std;

void prime(int n)
{
    int count[100] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (count[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)  
            {
                count[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (count[i] == 0)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n;
    cin >> n;
    prime(n);

    return 0;
}