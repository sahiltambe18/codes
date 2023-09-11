#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
// reduce the given arr
// make arr of sorted arrays index no
bool mycompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int arr[8] = {8,7,6,9,10,11,15,2};
               // 3 2 1 4  5  6  7 0
    vector<pair<int, int>> v;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        // v[i].first=arr[i];
        // v[i].second=i;
        v.push_back(make_pair(arr[i], i));
    }
    sort(v.begin(), v.end(), mycompare);
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}