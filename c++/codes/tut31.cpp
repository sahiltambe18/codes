#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a = 0;
        b = 0;
    }

    void print(void)
    {
        cout << "the no is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c(5, 9);
    c.print();

    complex b(5);
    c.print();

    complex d;
    d.print();

    return 0;
}