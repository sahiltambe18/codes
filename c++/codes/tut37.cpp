#include<iostream>
using namespace std;

class employee{
    float sallary =5000 ;
    public:
    int id ;
    employee(int i){
        id = i ;
        cout<<"id is "<<id<<endl;
             cout<<"sallary is "<<sallary<<endl;
    }
    employee(){}
};
/*
syntax of derived class 
{{derived class name }}:{{visibility mode}} {{base class name}}
 
 default visibility mode is private 
 in private mode public member of base class becomes private member of derived class
 in public mode public member of base class becomes public member of derived class


*/
class programmer :  employee {
    public:
    int lang_code = 9 ;
    programmer(int d){
        id = d ;
    }
    void get(){
                cout<<"id is "<<id <<endl;

    }

};



int main( )
  {
      employee sahil(001) ;
      programmer sahilt(1);
      sahilt.get();
      cout<<sahilt.lang_code;
      

return 0 ;
}