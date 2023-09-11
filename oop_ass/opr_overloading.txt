#include<iostream>
using namespace std;
class sample{
    int num ;
    public:
    void get(){
        cout<<"enter the number"<<endl;
        cin>>num;
    }
    void display(){
        cout<<num<<endl;
    }
    sample operator+(int x){
        sample temp;
        temp.num = num + x;
        return temp;
    }
    friend sample operator+( int , sample);
};

sample operator+(int x , sample y){
    sample temp;
    temp.num = x + y.num;
    return temp;
}

int main( )
  {
    sample obj1 , obj2 , obj3;
int x;
    obj1.get();
    cout<<"enter x"<<endl;
    cin>>x;
    
    obj2 = x+ obj1;
    obj3 = obj1 +x;
    obj2.display();
    obj3.display();
return 0 ;
}