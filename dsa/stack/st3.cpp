#include<iostream>
#include<stack>
using namespace std;
int main( )
  {
    stack<int> num ;
    num.push(0);
    num.push(1);
    num.push(2);
    num.push(3);
    num.push(4);
    num.push(5);
    num.push(6);
    
    stack<int> num2 ;
    while (!num.empty())
    {
        num2.push(num.top());
        num.pop();
    }cout<<endl;
    cout<< num2.top()<<" ";

return 0 ;
}