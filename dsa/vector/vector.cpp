#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);

    v.push_back(2);
    v.push_back(3);
    v.push_back(9);
    int arr[] = {5, 4, 9, 6, 7, 4, 5};

    for (int i = 0; i < 3; i++)
    {
        cout << v[i];
    }
    cout << endl;
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    for (int e : v)
    {
        cout << e;
    }
    for (auto e : v)
    {
        cout << e;
    }
    cout << endl;
    for (int e : arr)
    {
        cout << e;
    }

    vector<int> v2(5, 8); // 88888
    swap(v, v2);
    return 0;
}