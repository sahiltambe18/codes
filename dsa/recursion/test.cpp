#include<iostream>
using namespace std;
int arr(int  a , int b){
    int arr[2]={a,b};
    int * ptr = arr;
    return ptr ; 
}
int main( )
  {
      cout<< arr(2,3);

return 0 ;
}