#include<iostream>
using namespace std;

struct employee
{
    float  mob=7588057330;
    char favchar='c';
    float salary=50000000;
}ep;

union money
{
    float rice ;
    float wheat ;
    float bajri ;

};


int main( )
     { 
         enum meal{a,b,cat,d};
        cout<<a<<endl;/*enum is used to give index value tu a spec char or word*/
        cout<<b<<endl;
        cout<<cats<<endl;
        cout<<d<<endl;








    //   union money m1;
    //   m1.rice=5;
    //   cout<<m1.rice; /*in union we can use only one type at a time or it will give a garbege value*/
       
    //   cout<<m1.wheat;
      
//    cout<<"the employee1s salary is "<<ep.salary<<endl;  
//    cout<<"the employee1s char is "<<ep.favchar<<endl;  
//    cout<<"the employee1s mob no is "<<ep.mob<<endl;  

return 0 ;
}