#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
    // constants in cpp is used to assign fix value
    const int a=5,b=88,c=888;
    // *********
    cout<<"value of a is :"<<a<<endl;
    cout<<"value of b is :"<<b<<endl;
    cout<<"value of c is :"<<c<<endl;
// manipulators in cpp*******
    cout<<"value of a with setw :"<<setw(4)<<a<<endl;
    cout<<"value of b with setw :"<<setw(4)<<b<<endl;
    cout<<"value of c with setw :"<<setw(4)<<c<<endl;
    
    
    return 0;
}
