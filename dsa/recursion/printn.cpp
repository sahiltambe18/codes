#include <iostream>
using namespace std;

void dec(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    dec(n - 1);
}

void incr(int n)
{
    if (n == 0)
    {
        return;
    }

    incr(n - 1);
    cout << n << endl;
}

int main()
{
    //   dec(10);
    incr(10);
    return 0;
}