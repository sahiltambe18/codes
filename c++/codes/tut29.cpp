#include <iostream>
using namespace std;

class complex
{
private:
  int a, b;

public:
  complex(void);
  void comp(void)
  {
    cout << "complex no is " << a << " + " << b << "i" << endl;
  }

}; // constructor is a function with same name as of class
    // it is automatically started when class is created

complex ::complex()
{ // type ---->   default constructor
  //  complex(int a , int b) also can be used
  a = 10;
  b = 20;
  cout << "hello world" << endl;
}

int main()
{
  complex c1;
  c1.comp();

  return 0;
}