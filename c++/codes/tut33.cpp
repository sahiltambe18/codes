#include <iostream>
using namespace std;

class bank
{
private:
    int deposit;
    int years;
    float rate;
    float returns;

public:
    bank(){}; // we have to give a blank constructor
    bank(int d, int y, float r);
    bank(int d, int y, int r);
};

bank ::bank(int d, int y, float r)// for decimal rate
{

    deposit = d;
    years = y;
    rate = r;
    returns = d;
    for (int i = 0; i < y; i++)
    {
        returns = returns * (1 + rate);
    }
    cout << "the deposit was " << deposit << endl
         << "the return after " << y << " years is " << endl
         << "total " << returns << endl;
}
bank ::bank(int d, int y, int r)// for percent rate 
{

    deposit = d;
    years = y;
    rate = float(r) / 100;
    returns = d;
    for (int i = 0; i < y; i++)
    {
        returns = returns * (1 + rate);
    }
    cout << "the deposit was " << deposit << endl
         << "the return after " << y << " years is " << endl
         << "total " << returns << endl;
}

int main()
{
    int d, y, R;
    float r;

    cout << "enter the amount to deposit" << endl;
    cin >> d;
    cout << "enter the no of years " << endl;
    cin >> y;
    cout << "enter the rate in decimal" << endl;
    cin >> r;
    bank b1, b2, b3;
    b1 = bank(d, y, r);
    cout << "enter the rate in percent" << endl;
    cin >> R;
    b2 = bank(d, y, r);
    return 0;
}