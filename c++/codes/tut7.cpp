#include<iostream>
using namespace std;
int c=88;
int main()

{    
    int a,b,c;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"the sum is :"<<c;
    cout<<"the global c is :"<<::c<<endl;
// literals****************
    float d=55.5f;
    long double g=55.5l;
    // by defalt any decimal no is ld
     cout<<"siza of d is "<<sizeof(d)<<endl;
// ******************referal variable**********
     float x=555;
     float &y=x;
     cout<<"x is "<<x<<endl<<"y is "<<y<<endl;

    //  *****type casting******
    int h=8;
    float t=8.1;
    cout<<"value of h"<<(float)h<<endl<<"value of t is "<<(int)t<<endl;
    cout<<"sum is :"<<h+t<<endl;
    int j= h;
cout<<j;

    return 0;
}
