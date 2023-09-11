#include <iostream>
using namespace std;

class base
{
public:
    int bvar = 8;
    virtual void display()
    {
        cout << "value of base var is : " << bvar << endl;
    }
};

class derived : public base
{
public:
    int dvar = 9;
    void display()
    {
        cout << "value of derived var is : " << dvar << endl;
    }
}; // by virtual function base class pointer pointing derived class
// havin same func use derived class object

int main()
{
    base *ptbase;
    base b1;
    derived d1;
    ptbase = &d1;
    ptbase->display();

    /* derived* ptderive;
     ptderive = &d1;
     ptderive->dvar=98;
     ptderive->print();
     ptderive->bvar=88;
     ptderive->display();*/

    return 0;
}