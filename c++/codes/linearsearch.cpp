#include <iostream>
using namespace std;

int lsearch(int ary[], int k, int l)
{
    for (int i = 0; i < l; i++)
    {
        if (ary[i] == k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout << "enter length" << endl;
    int n;
    cin >> n;
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }
    int key;
    cin >> key;
    cout << lsearch(ary, key, n);

    return 0;
}