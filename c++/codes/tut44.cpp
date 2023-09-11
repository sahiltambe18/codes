#include<iostream>
using namespace std;

class alpha{
    public:
    int a=5;
};

class base1 : virtual public alpha {
    public:
      void say(){
          cout<<"hello world"<<endl;
      }
};
class base2 : virtual public alpha {
    public:
      void say(){
          cout<<"hello sahil"<<endl;
      }    
};
class derived : public base1 , public base2 {
    public:
      void say(){
          base2 ::say() ;
      }    
};

int main( )
  {
      derived d ;
      d.say();
      d.a;

return 0 ;
}