#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // static member directly belongs to class employee not its object
public:
    void setid(void)
    {
        cout << "enter the id of employee" << endl;
        cin >> id;
        count++;
    }
    void dis(void)
    {
        cout << "the id of employee no " << count << " is " << id << endl;
    }
    static void getcount()
    {
        cout << "the value of count is " << count << endl; 
    }                               // static function have access to only static members like count not id
};

int employee ::count; // deefault value is 0

int main()
{
    employee harry, rohan, sahil;

    harry.setid();
    rohan.setid();
    sahil.setid();
    harry.dis();
    rohan.dis();
    sahil.dis();

    employee::getcount();
    return 0;
}