#include<iostream>
using namespace std;
// recursive method
int sum(int n){
    if (n==0)
    {
        return 0 ;
        
    }
    int prev = sum(n-1);
    return n + prev;
}
 // forward method
int summ( int n){
    int add = 0 ;
    for (int i = 0; i <= n; i++)
    {
        add+=i;
    }
    return add;
    
}

int main( )
  {
cout<< sum(5)<<endl;
cout<< summ(5);
return 0 ;
}