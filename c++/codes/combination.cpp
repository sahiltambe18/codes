#include<iostream>
using namespace std;

int facto(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
    }
    return fact;
}

int main( )
  {
      int n ;
      int r ;
      cout<<"enter the no"<<endl;
      cin>>n>>r;
      int comb= facto(n)/ (facto(r)*facto(n-r));

      cout<<"comb is "<<comb<<endl;

return 0 ;
}
