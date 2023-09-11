#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void set(int x1, int x2)
    {
        a = x1;
        b = x2;
    }
    void sum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void print()
    {
        cout << "the complex no is " << a << "+ " << b << "i" << endl;
    }
};

int main()
{
    complex s1, s2, s3;
    s1.set(5, 8);
    s1.print();

    s2.set(8, 9);
    s2.print();

    s3.sum(s1, s2);
    s3.print();
    return 0;
}