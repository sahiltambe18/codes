#include <iostream>
#include <vector>
using namespace std;


vector<vector<float>> matrixmul(vector<vector<float>> a, vector<vector<float>> b)
{
    vector<vector<float>> res(3, vector<float>(3));
    for (int i = 0; i < 3; i++)
    {
        float r;
        for (int j = 0; j < 3; j++)
        {
            res[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2] * b[2][j];
        }
    }
    return res;
}

int main()
{
    vector<vector<float>> a = {{100, 100, 1}, {300, 100, 1}, {300, 300, 1}};

    vector<vector<float>> b = {{1, 0, 0}, {0, 1, 0}, {2, 2, 1}};

    for (int i = 0; i < 3; i++)
    {
        for (float &j : a[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (float &j : b[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    a = matrixmul(a,b);

    for (int i = 0; i < 3; i++)
    {
        for (float &j : a[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}