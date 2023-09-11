#include<iostream>
using namespace std;
/*
find the sum of subarry
*/
int main( )
  {
int n = 5;
int a[n]= {8,4,9,7,6};
int s = 21;
int i = 0 , j=0 , st = -1 , en= -1, jo=0; ;
int sum = 0;
while (j<n && sum+a[j]<=s)
{
    sum+=a[j];
    j++;
}
if (sum== s){
    
    cout<< i+1 <<" - "<<j;


    return 0 ;
}
while (jo<n)
{
    while (sum>s)
    {
        sum-=a[i];
        i++;
    }
    if (sum==s){
        st=i;
        en=j;
        break;
    }
    jo++;
}
cout<<st<<" - "<<en;

return 0 ;
}