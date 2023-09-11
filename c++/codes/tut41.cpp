#include<iostream>
using namespace std;

class base1{
    protected:
    int b1;
    public:
    base1(){
        cout<<"enter b1"<<endl;
        cin>>b1;
    }
};
class base2{
    protected:
    int b2;
    public:
    base2(){
        cout<<"enter b2"<<endl;
        cin>>b2;

    }
};
class derived : public base1 , public base2 {
    protected:
    int base3 ;
    public:
    void sum(){
        base3= b1 + b2;
        cout<<"b1 is "<<b1 <<endl;
        cout<<"b2  is "<<b2 <<endl;
        cout<<"b3 is "<<base3 <<endl;
    }

};
int main( )
  {
  derived d ;
  d.sum();
return 0 ;
}