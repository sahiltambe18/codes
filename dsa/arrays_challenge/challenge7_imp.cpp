#include <iostream>
using namespace std;
int main()
{
    /*
    find smallest missing positive number from array
    [0,-8,2,8,6,-7]
    ans-->1
    */
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int N = 1e6 + 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] >= 0)
        {
            check[a[i]] = true;
        }
    }
    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            cout << i;
            return 0;
        }
    }

    return 0;
}