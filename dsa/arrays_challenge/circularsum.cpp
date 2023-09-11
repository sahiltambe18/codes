#include<iostream>
using namespace std;
int kadane(int arr[] , int n){

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
return current;

}
int main( )
  {
      int n = 5;
      int arr[n]={-2,8,-9,6,5};
      int  wrapsum , nonwrapsum;
      nonwrapsum= kadane(arr , n);

      int totalsum= 0;
      for (int i = 0; i < n; i++)
      {
          totalsum+=arr[i];
          arr[i]= -arr[i];
      }
      wrapsum= totalsum+ kadane(arr , n);

      cout<< max(wrapsum , nonwrapsum)<<endl;
      cout<<nonwrapsum;
      
return 0 ;
}