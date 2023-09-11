#include<iostream>
using namespace std;

class base{
    public:
    int bvar;
    void display(){
        cout<<"value of base var is : "<<bvar<<endl;
    }
};

class derived:public base{
    public:
    int dvar;
    void print(){
        cout<<"value of derived var is : "<<dvar<<endl;
    }
};

int main( )
  {
      base * ptbase ;
      base b1;
      derived d1;
      ptbase = &d1; // base class pointer can point to  only base class objects
      ptbase->bvar=39;
      ptbase->display();

      derived* ptderive; // derived class pointer can point to 
                        //both base & derived class objects
      ptderive = &d1;
      ptderive->dvar=98;
      ptderive->print();
      ptderive->bvar=88;
      ptderive->display();


return 0 ;
}