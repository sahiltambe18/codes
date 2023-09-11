#include<iostream>
using namespace std;

class base1{
    public:
      void say(){
          cout<<"hello world"<<endl;
      }
};
class base2{
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

return 0 ;
}