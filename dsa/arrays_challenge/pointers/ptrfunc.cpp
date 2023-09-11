#include<iostream>
using namespace std;
int main( )
  {
// swap 2 variables

void swap( int *a , int *b) 
{
    int temp = *a;
    *a = *b ; 
    *b = temp ; 
}

int a = 5;
int b = 10;
int * aptr = &a;
int * bptr = &b;
cout<<a<<endl;
cout<<b<<endl;
swap(aptr , bptr);
cout<<a<<endl;
cout<<b<<endl;


return 0 ;
}