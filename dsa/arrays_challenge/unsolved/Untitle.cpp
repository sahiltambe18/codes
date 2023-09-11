#include <iostream>
using namespace std;
/*
find repeting elements index in array
*/
int main()
{
    int n = 7;
    int a[7] = {2, 1, 5, 3, 4, 3, 5};
    const int k = 1e6 + 2;
    int idx[k];
    for (int i = 0; i < k; i++)
    {
        idx[i] = -1;
    }

    int minindx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if(idx[a[i]] != -1) {
            minindx = min(minindx , idx[a[i]]) ;
        }
        else{
            idx[a[i]]= i ;
        }
    }
    cout << minindx;
    return 0;
}