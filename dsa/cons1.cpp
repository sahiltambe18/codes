#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 0, 1, 1, 1, 1, 0, 1, 1, 1};
    int k = 1;
    int zero = 0, i = 0, ans = 0;
    for (int j = 0; j < 10; j++)
    {
        if (arr[j] == 0)
        {
            zero++;
        }
        while (zero > k)
        {
            if (arr[i] == 0)
            {
                zero--;
            }

            i++;
        }
        ans = max(ans , j-i+1);
    }
    cout<<ans;

    return 0;
}