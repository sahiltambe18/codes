#include<iostream>
using namespace std;
int main( )
  {
    //  pointers-----data types which hold address of other data types

int a=5;
int*b=&a;
// &----(adress of)--oprator
cout<<"address of a is "<<&a<<endl;
cout<<"address of a is "<<b<<endl;
// * ---value at --- dereference operator
cout<<"value at address b is "<<*b<<endl;

int** c= &b;
// pointer to pointer ---- pointer which store the address of pointer
cout<<"address of b is "<<&b<<endl;
cout<<"address of b is "<<c<<endl;
cout<<"value at address of c is "<<*c<<endl;
cout<<"the value of address in the address of c is "<<**c<<endl;

return 0 ;
}