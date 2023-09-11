#include<iostream>
using namespace std;

int summ(int n){
    int sum = 0;
    for (int i = 1; i <=n; i++)
    {
        sum+=i;
    }
    return sum;
    
}

int main( )
  {
      int n ;
      cin>>n;
      int ans  = summ(n);
      cout<<ans;

return 0 ;
}