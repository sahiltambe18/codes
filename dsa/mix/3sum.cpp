#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[9] = {5, 9, 7, 3, 4, 6, 8, 2, 1};
    int target = 25;
    sort(arr.begin(),arr.end());
    for (int i = 0; i < 9; i++)
    {
        int low = i + 1;
        int hig = 9 - 1;
        while (low < hig)
        {
            int current = arr[i] + arr[low] + arr[hig];
            if (current == target)
            {
                cout << "3sum found" << endl;
            }
            else if (current < target)
            {
                low++;
            }
            else if (current > target)
            {
                hig--;
            }
        }
    }

    return 0;
}