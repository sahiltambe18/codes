#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // Write your code here
    int i = 0, j = 0;
    vector<int> ans;
    int arr[22];
    int x = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
        {
            if ( ans.size() == 0 || ans.back() < a[i])
            {
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else
            {
                i++;
                j++;
            }
        }
        else if (a[i] < b[j])
        {
            if (ans.size() == 0 || ans.back() < a[i])
            {
                ans.push_back(a[i]);
                i++;
            }
            else
            {
                i++;
            }
        }
        else
        {
            if (ans.size() == 0 || ans.back() < b[j])
            {
                ans.push_back(b[j]);
                j++;
            }
            else
            {
                j++;
            }
        }
    }
    if (i < a.size())
    {
        while (i < a.size())
        {
            if (ans.back() < a[i])
            {
                ans.push_back(a[i]);
                /* code */ i++;
            }
            else
            {
                /* code */
                i++;
            }
        }
    }
    else if (j < b.size())
    {
        while (j < b.size())
        {
            if (ans.back() < b[j])
            {
                /* code */
                ans.push_back(b[j++]);
            }
            else
            {
                /* code */
                j++;
            }
        }
    }
    return ans;
}

/*
9 5
1 1 2 3 5 5 5 10 10
2 4 7 10 10

*/


int missingNumber(vector<int>& nums) {
        vector<int> v (0 , nums.size());
        for(int i = 0 ; i < nums.size() ; i++){
            v[ nums[i] ] = 1;
        }
        for(int i = 0 ; i < v.size() ; i++){
            if(v[i] != 1){
                return i;
            }
        }
    }

int main()
{
    vector<int> a = {1, 1, 2, 3, 5, 5, 5, 10, 10};
    vector<int> b = {2, 4, 7, 10, 10};
    

    vector<int> ans = sortedArray(a, b);
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}