#include<iostream>
using namespace  std;
int main( )
{
    // selection control structure
    int x;
    cout<<"enter your bank balence";
    cin>>x;
    if (x>1000)
    {
        cout<<"you can buy this item";

    }
    else if (x==1000)
    {
        cout<<"it is expensive for you";
    }
    else if ((x<1000)&&(x>1))
    {
        cout<<"you cannot buy this item";
    }

    else{
        cout<<"tereko andar kisne lia be";

    }


    
    return 0;
}
