#include <iostream>
using namespace std;

class complex
{

    int a, b;

public:
    void set(int x1, int x2)
    {
        a = x1;
        b = x2;
    }
    friend complex sum(complex v1, complex v2);
    void print()
    {
        cout << "the number is " << a << " + " << b << "i" << endl;
    }
};

complex sum(complex v1, complex v2)
{
    complex v;
    v.set((v1.a + v2.a), (v2.b + v2.b));
    return v;
}

int main()
{
    complex c1, c2, c3;

    c1.set(4, 5);
    c1.print();

    c2.set(8, 9);
    c2.print();

    c3 = sum(c1, c2);
    c3.print();

    return 0;
}