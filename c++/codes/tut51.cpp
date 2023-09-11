#include <iostream>
using namespace std;

class complex
{
    int real;
    int image;

public:
    void set(int a, int b)
    {
        real = a;
        image = b;
    }
    void get()
    {
        cout << "the real part is " << real << endl;
        cout << "the imagenary part is " << image << endl;
    }
};

int main()
{
    // complex c1 ;
    // complex *ptr = &c1;
    //   or
    //   complex *ptr = new complex;
    //   (*ptr).set(5,8);
    //   (*ptr).get();

    // or
    //  array of objects
    complex *ptr = new complex[3];
    ptr->set(89, 88); // most useful syntax
    ptr->get();

    return 0;
}