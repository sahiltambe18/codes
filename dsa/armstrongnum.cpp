#include <iostream>
using namespace std;
int main()
{
    cout << "enter a no" << endl;
    int n;
    cin >> n;
    int realn=n;
 int reverse = 0;
    while (n > 0)
    {
        int l;
        l = n % 10;
        reverse = reverse  + (l*l*l);
        n = n / 10;
    }
    if ( reverse==realn)
    {
       cout<<realn<<" is armstrong number"<<endl;
    }
    else
    {
        cout<<realn<<" is not armstrong number"<<endl;
    }
    
    

    return 0;
}