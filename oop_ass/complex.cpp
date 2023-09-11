#include<iostream>
using namespace std;

class complex{
    int real , img;
    public:
    void get(){
        cout<<"enter real "<<endl;
        cin>>real;
        cout<<"enter img "<<endl;
        cin>> img;
    }
    void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    void modify(complex *c){
        c->real = 10;
        c->img = 20;
    }
    void modifyy(complex &c){
        c.real = 10;
        c.img = 20;
    }
};

int main( )
  {
    complex c1 ,c2;
    c1.get();
    c2.get();
    // c1.modify(&c2);
    c1.modifyy(c2);
    c2.display();


return 0 ;
}