#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[5] = {54, 98, -87, 56, 1111};

    for (int i = 0; i < n; i++)
    {
        int sum = 0;

        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}