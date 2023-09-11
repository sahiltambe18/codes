#include<iostream>
using namespace std;
int main( )
  {
            int a = 5;
            int* p = &a ;
            cout<<"the value of a is "<<a<<endl;

            int *r = new int(8);
            cout<<"value at address of r is "<< *(r)<<endl;

            int *arr = new int[3];
            arr[0]=9;
            *(arr+1)=6;
            arr[2]=3;
            cout<<"value at address arr[0] is "<<(arr[0])<<endl;



return 0 ;
}