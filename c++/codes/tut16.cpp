#include<iostream>
using namespace std;
// void swap(int x,int y){ /*this will not work bcz it will just copy value of a and b */
// //    int temp=x;   to swap 2 variables we have to swap their address
//     x=y;   
//     y=x;
// }


// call by reference using pointers
// void swappointer(int* x,int* y){ 
    // int temp=*x;   
    // *x=*y;   
    // *y=temp;
// }

void swapreference(int &x,int&y){
    int temp =x;
    x=y;
    y=temp;
}


int main( )
  {
    int a=5;
    int b=6 ;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    // swap(a,b);
    swapreference(a,b);
    // swappointer(&a,&b);
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;


return 0 ;
}