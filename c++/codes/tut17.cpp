#include<iostream>
using namespace std;
//  when you have to use certain user define function use inline keyword to inhance speed of your code 
// but use it only when the function is so small bcoz if func is very big it will use lots of space

// inline int product(int x , int y){
    // return x*y ;
// }
// int product(int x , int y){
//     static c=0;   /* static executes only ones and from next time value of c++ is used*/
//     c=c+1;
//     return x*y+1;
// do not use static key with inline function
int product(int x , int y){
    return x*y ;
}
int main( )
  {
int a=5 , b=9;
cout<<"product of a and b is "<< product(a,b);

return 0 ;
}