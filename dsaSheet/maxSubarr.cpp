#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {-2, 1, -3, 4, -1, 2, -5, 4};
    int sum = 0;
    int maxx = arr[0];

    /*
    Brute force

        for (int i = 0; i < 8; i++)
        {
            sum =0;
            for (int j = i; j < 8; j++)
            {
                sum+=arr[j];
            cout<<sum<<endl;
            }
        }

    */
    for (int i = 0; i < 8; i++)
    {
        sum += arr[i];
        maxx = max(maxx, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    cout << maxx << endl;

    return 0;
}