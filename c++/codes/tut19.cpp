#include<iostream>
using namespace std;

// you can name two functions same ie.
int volume (int x , int y){
   return (3.142*x*x*y)/3 ;
}
int volume (int x){
    return x*x*x ;
}


int main( )
  {
      int a ,b;
      cout<<"enter the value"<<endl;
      cin>>a;
      cout<<"enter the height"<<endl;
      cin>>b;
      cout<<"volume of cube with side "<<a<<" is ---> "<<volume(a)<<endl;
      cout<<"volume of cone  is ---> "<<volume(a , b)<<endl;

return 0 ;
}