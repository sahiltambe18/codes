#include<iostream>
using namespace std;

int facto(int n){
    if (n==1)
    {
        return 1 ;
    }
    

    int prev = facto(n-1);
    return n*prev;
}

int main( )
  {
      cout<< facto(6);

return 0 ;
}