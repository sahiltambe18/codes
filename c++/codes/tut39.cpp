#include <iostream>
using namespace std;

/*

                                  derived class visibility mode 
members of base  |      private        |      public     |   protected 
private          |    not inheritate   |      not        |      not 
protected        |   private           |     protected   |   protected
public           |  private            |     public      |    protected

*/

class base
{
protected:
    int a;

private:
    int b;

public:
    int c;
};

class derived : public base
{
    // int a will be protected here
    // we can  acces  protected members  same as we access private members
    // protected members are inherited in derived class
};

int main()
{
    base b;
    derived d;
    cout << d.c;

    return 0;
}