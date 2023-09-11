#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() {}
    number(int num)
    {
        a = num;
    }
    void display()
    {
        cout << "the number is " << a << endl;
    }
    // number(number &x){    // copy constructor
    //     cout<<"copy constructor invoked !!"<<endl;
    //     cout<<"the num is "<<x.a ;

    // }
};
// the compiler has inbuild copy constructor
//  it invoked automatically if above constructor in not created
                                             //|
int main()                                   //|
{                                            //|
                                             //|
    number n1 = (5);                         //| 
    n1.display();                            //|
    number j = n1;    //  <--------------- like this
    j.display();

    return 0;
}