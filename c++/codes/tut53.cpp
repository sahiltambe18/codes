#include<iostream>
using namespace std;

class A{
    int a;
    public:
    // A& set(int a){      ---by use of this we can return an objet a 
    void set(int a){
       this->a=a;
    //    return *this ;
    }
    void print(){
        cout<<"value of a is "<<a<<endl;
    }

};

int main( )
  {
      A a;
      a.set(5)/*.print()*/;
      a.print();

return 0 ;
}