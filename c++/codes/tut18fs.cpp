#include<iostream>
using namespace std;

int fib(int n){
    for ( int i = 0; i <= n; i++)
    {
       int x= i + (i++);
        cout<< x<<endl;
    }
    
}


int main( )
  {
int a;
cout<<"enter the number";
cin>>a;
fib(a);


return 0 ;
}