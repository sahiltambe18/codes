#include<iostream>
using namespace std;
int fact(int n){
    int facto=1;
    for (int i = 2; i <= n; i++)
    {
        // facto=facto*i;
        facto*=i;
    }
    return facto;
    
}
int main( )
  {
     int a = fact(5);
     cout<<a<<endl;

return 0 ;
}