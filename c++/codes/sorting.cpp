#include <iostream>
using namespace std;
int main()
{
    int n0=5;
    // cin >> n;
    int arr[n]={85,98,74,26,15};
    // for (int i = 0; i < n; i++)
    // {
        // cin >> arr[i];
    // }
    //   for (int i = 0; i < n; i++)
    //   {
    //       cout<<arr[i] <<" ";
    //   }cout<<endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; i < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
cout<<"fuck you";
    return 0;
}