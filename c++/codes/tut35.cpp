#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when the construcktor is called for object no " << count << endl;
    }

    ~num()
    {
        cout << "this is the time when destructor is called for object no " << count << endl;
        count--;
    }
};

// destructor does not take any argument

int main()
{
    cout << "entering in the main func " << endl;
    cout << "creating 1st object" << endl;
    num n1;
    {
        cout << "entering in the block" << endl;
        cout << "creating 2 more objects" << endl;
        num n2, n3;
        cout << "exiting from the block" << endl;
    }
    cout << "back to main again" << endl;

    return 0;
}