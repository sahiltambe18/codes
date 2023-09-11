#include<iostream>
using namespace std;
int fib(int n){
    if (n<2)
    {

        return 1 ;
    }
    
    return fib(n-2)+fib(n-1) ;
}
int main( )
  {
int a;
cout<<"enter the number"<<endl;
cin>>a;
cout<<"the term at position "<<a<<"in fibonaci sequence is "<<fib(a);
return 0 ;
}