#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void set();
    int get1();
    int get2();
};

void base ::set()
{
    cout << "enter data 1" << endl;
    cin >> data1;
    cout << "enter data 2" << endl;
    cin >> data2;
}

int base ::get1()
{
    return data1;
}

int base ::get2()
{
    return data2;
}

class derived : private base
{
    int data3;

public:
    void multi();
    void print();
};

void derived ::multi()
{
    set();
    data3 = (get1() * data2);
}

void derived ::print()
{
    cout << "the value of data1 is " << get1() << endl;
    cout << "the value of data2 is " << get2() << endl;
    cout << "the value of data3 is " << data3 << endl;
}

int main()
{
    derived d;

    //d.set();

    //   d.get1();
    //   d.get2();

    d.multi();
    d.print();

    return 0;
}