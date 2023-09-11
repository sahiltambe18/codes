#include<iostream>
#include<stack>
using namespace std;
int main( )
  {
int arr[]={100,90,80,60,70,75,85,90};
stack<int> st ;
for (int i = 0; i < 8; i++)
{
    int span = 0;
    for (int j = i; j>=0; j--)
    {
        if (arr[i]>arr[j])
        {
            span++;
            
        }
        else{
            st.push({span});
            break;
        }
    }
    
}
while (!st.empty())
{
    cout<<st.top()<<" ";

}



return 0 ;
}