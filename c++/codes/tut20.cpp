#include<iostream>
using namespace std;

class integers
{
private:
    int a , b , c;
public:
    int d , e , f;
    void set(int a1,int b1,int c1);/*declaration*/
    void get(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<"value of c is "<<c<<endl;
        cout<<"value of d is "<<d<<endl;
        cout<<"value of e is "<<e<<endl;
        cout<<"value of f is "<<f<<endl;
    }
};

 void integers::set(int a1 , int b1 , int c1)
 {
     a=a1;
     b=b1;/*to get private values we have to create a func declaration inside the class*/
     c=c1;/*and make the function outside the scope*/

 }

int main( )
  {
      integers sahil ;
      sahil.d=99;
      sahil.e=88;
      sahil.f=77;
      sahil.set(8,6,5);
      sahil.get();

return 0 ;
}