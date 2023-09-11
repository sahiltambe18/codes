#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 9, 7, 8, 3, 4};
    pair<int, int> pi;
    for (int i = 0; i < 6; i++)
    {
        pi.first = i;
        pi.second = arr[i];
        cout << pi.first << " ";
        cout << pi.second << endl;
    }
    cout << pi.first;
    pair<int, bool> c;
    c.first = 5;
    c.second = 0;
    return 0;
}