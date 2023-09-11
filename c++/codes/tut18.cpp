#include<iostream>
using namespace std;
int factorial(int n){/* when it reaches n==1 the value of factorial of 1 will be returned 1*/
    if (n<=1)
    {
        return 1;
    }
 return n* factorial(n-1);
}

int main( )
  {

int a;
cout<<"enter the value ";
cin>>a;
cout<<"the factorial of "<<a<<" is ---> "<<factorial(a)<<endl;



return 0 ;
}