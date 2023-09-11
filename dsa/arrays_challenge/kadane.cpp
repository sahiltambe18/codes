#include<iostream>
using namespace std;
int main( )
  {
int n=6;
int arr[n]={-1,5,4,-11,16,-8};
int current= INT_MIN;
int sum=0;
for (int i = 0; i < n; i++)
{
    sum+=arr[i];
    if (sum<0)
    {
        sum=0;
    }
    current= max(current , sum);
    
    
}
cout<<current;

return 0 ;
}