#include <iostream>
using namespace std;

bool sorted(int arr[], int n)
{
    if (n == 0)
    {
        return 1;
    }

    bool restarray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restarray);
}

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << sorted(arr, 9);

    return 0;
}