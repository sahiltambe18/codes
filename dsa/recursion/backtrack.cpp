#include <iostream>
using namespace std;

bool block(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool path(int **arr, int x, int y, int n, int **soln)
{

    if (x == n - 1 && y == n - 1)
    {
        soln[x][y] = 1;
        return true;
    }

    if (block(arr, x, y, n))
    {
        soln[x][y] = 1;
        if (path(arr, x + 1, y, n, soln))
        {
            return true;
        }
        if (path(arr, x, y + 1, n, soln))
        {
            return true;
        }
        soln[x][y] = 0;
        return false;
    }
    return false;
}

int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    //   int**sol = new int*[n];

    int** sol = new int *[n];
    for (int i = 0; i < n; i++)
    {
        sol[i] = new int[n];
        for (int j = 0; j < 0; j++)
        {
            sol[i][j] = 0;
        }
    }

    if (path(arr, 0, 0, n, sol))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 0; j++)
            {
                cout << sol[i][j] << ' ';
            }
            cout << endl;
        }
    }

    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 0; j++)
            {
                cout << sol[i][j] << ' ';
            }
            cout << endl;
        }

    return 0;
}

// 10101
// 11111
// 01010
// 10011
// 11101