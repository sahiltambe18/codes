#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
   for (int i = 0; i < n; i++)
   {
        int next;
    next=t1+t2;
    t1=t2;
    t2=next;
   cout<<next<<endl;
   }
    
    }

int main( )
  {
      fib(10);

return 0 ;
}