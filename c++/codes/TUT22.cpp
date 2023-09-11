#include <iostream>
using namespace std;

class binnary

{
private:
    string s;
    // private obj are noot accecible to user
    // it cann only used byy class objects
public:
    void value(void);
    void check(void);
    void comp();
    void print(void);
};

void binnary ::value(void)
{
    cout << "enter the number";
    cin >> s;
}

void binnary ::check(void)
{
    value();
    // nest function:\/
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "its not a binnary number" << endl;
            exit(0);
        }
    }
}

void binnary ::print(void)
{
    cout << s << endl;
}

void binnary ::comp(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

int main()
{
    binnary c;

    c.check();
    c.print();
    c.comp();
    c.print();

    return 0;
}