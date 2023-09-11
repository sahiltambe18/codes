#include <iostream>
using namespace std;

/*
class a : public b
order of execution of constructor----b()>>a()

class a : publiic b , public c
order of execution of constructor----b()>>c()>>a()

class a : publiic b , virtual public c
order of execution of constructor----c()>>b()>>a()


*/

class base1
{
private:
    int a;

public:
    base1(int i)
    {
        a = i;
        cout << "base1 constructor invoked" << endl;
    }
    void print1(void)
    {
        cout << "value of base1 is " << a << endl;
    }
};

class base2
{
private:
    int b;

public:
    base2(int i)
    {
        b = i;
        cout << "base2 constructor invoked" << endl;
    }
    void print2(void)
    {
        cout << "value of base2 is " << b << endl;
    }
};

class derived : public base1, public base2
{
private:
    int x, y;

public:
    derived(int s, int t, int u, int v) : base1(u), base2(v)
    {
        x = s;
        y = t;
        cout << "derived  constructor invoked" << endl;
    }
    void printd(void)
    {
        cout << "values derived are " << x << " and " << y << endl;
    }
};

int main()
{
    derived d(5, 6, 7, 8);
    d.print1();
    d.print2();
    d.printd();

    return 0;
}