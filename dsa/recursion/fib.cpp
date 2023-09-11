#include<iostream>
using namespace std;
int fib(int n){
    if (n==1 | n==0)
    {
        return n;
    }
    
    // 0,1,1,2,3,5,8,13,21
    return fib(n-2) + fib(n-1);
}

int main( )
  {
      cout<< fib(5);

return 0 ;
}