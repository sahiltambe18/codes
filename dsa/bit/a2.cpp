#include <iostream>
using namespace std;

int power2(int n) // check given no is power of 2
{
    return (n && !(n & (n - 1)));
}

int numof1( int n){ //  find no of 1 in binary (n)
    int count =0;
    while (n)
    {
        n = n & n-1 ;
        count++;
    }
    return count ;
}

int main()
{
    // cout << power2(0);
    cout<< numof1(15);
    return 0;
}