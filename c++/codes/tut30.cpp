#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex(int, int);

    void print(void)
    {
        cout << "the complex number is " << a << " + " << b << "i" << endl;
    }
};

// parameterised constructor ----> it takes parameters
// and can call by 2 ways // implicit / explicit

complex ::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    // implicit call
    complex c(4, 5);
    c.print();

    // explicit call
    complex d = complex(8, 9);
    d.print();

    return 0;
}