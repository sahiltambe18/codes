#include<iostream>
using namespace std;
int main( )
  {
cout<<"enter a no "<<endl;
int a;
cin>>a;
for (int i = 2; i < a; i++)
{
    if (a%i==0)
    {
        cout<<"not prime"<<endl;
        break;
    }
    if (a%i==1)
    {
        cout<<"prime"<<endl;
        
    }
    
    
}

return 0 ;
}