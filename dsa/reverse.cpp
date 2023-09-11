#include <iostream>
using namespace std;
int main()
{
    cout << "enter a no" << endl;
    int n;
    cin >> n;
    int reverse = 0;
    while (n > 0)
    {
        int last;
        last = n % 10;
        reverse = reverse * 10 + last;
        n = n / 10;
    }
    cout << reverse;

    return 0;
}