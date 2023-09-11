#include<iostream>
using namespace std;

bool trip(int x, int y, int z){
    int a,b,c;
    a = max(x, max(y,z));
    if (a==x)
    {
        b=y;
        c=z;
    }
    else if (a==y)
    {
        b=x;
        c=z;
    }
    else
    {
        
        b=x;
        c=y;
    }

    if ((a*a)==((b*b)+(c*c)))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main( )
  {
      int x,y,z;
      cin>>x>>y>>z;
      if (trip(x , y ,z)==true)
      {
          cout<<"is a pythagorian triplet"<<endl;
      }
      else if (trip(x ,y ,z)==false)
      {
         cout<<"not a pythagorian triplet"<<endl;
      }
      
      

return 0 ;
}