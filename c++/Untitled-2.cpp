#include<iostream>
using namespace std;

// you can name two functions same ie.

int volume (int x){
    return x*x*x ;
}


int main( )
  {
      int a;
      cout<<"enter the value"<<endl;
      cin<<a;
      cout<<"volume of cube with side "<<a<<" is ---> "<<volume(a)<<endl;

return 0 ;
}