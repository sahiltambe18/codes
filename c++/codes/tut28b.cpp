#include<iostream>
using namespace std;
class c2;

class c1{

    int val1;
      friend void exchange(c1 & x , c2 & y);
    public:
      
      void set(int a){
          val1 = a ;
      }

      void display(){
          cout<<"value of a is "<< val1 << endl;
      }



};



class c2{

    int val2;

    friend void exchange(c1 & x , c2 & y);
    public:
      
      void set(int a){
          val2 = a ;
      }

      void display(){
          cout<<"value of b is "<< val2 << endl;
      }



};

void exchange(c1 & x , c2 & y){
  int tmp = x.val1 ;
  x.val1 = y.val2 ;
  y.val2 = tmp ;
  cout<<"exchange succesful.........."<<endl;
}

int main( )
  {
    c1 u1 ;
    c2 u2 ;

    u1.set(8);
    u2.set(9);
    u1.display();
    u2.display();

   exchange(u1 , u2);
    u1.display();
    u2.display();

return 0 ;
}