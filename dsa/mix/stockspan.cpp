#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {100, 80, 60, 70, 60, 75, 85};
    // stack<int> st ;
    vector<int> ans;

    for (int i = 0; i < 8; i++)
    {
        int span = 0;
        for (int j = i; j >= 0; j--)
        {
            if (arr[i] >= arr[j])
            {
                span++;
            }

            else
            {
                // st.push({span});
                ans.push_back(span);
                break;
            }
        }
        if (i == 0)
        {
            ans.push_back(span);
        }
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}