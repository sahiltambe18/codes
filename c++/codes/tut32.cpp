#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y = 8)
    {
        a = x;
        b = y;
    }

    void print()
    {
        cout << "the value of a and b is " << a << " and " << b << endl;
    }
};

int main()
{
    complex s(5); // here b is default 8
    s.print();

    complex t(2, 6); // be is given value here
    t.print();

    return 0;
}
