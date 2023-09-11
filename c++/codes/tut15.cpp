#include<iostream>
using namespace std;
// this are functin prototypes\|/

int sum(int , int );
void p();
int main( )
  {
    int a ,b ;
    cout<<"enter value of a";
    cin>>a;
    cout<<"enter value of b";
    cin>>b;

    cout<<"the sum is "<< sum(a,b); 

cout<<"\n good morning";

return 0 ;
}
int sum(int a,int b){
        int c=a+b;
        return c;


}
void p(){
    cout<<"good morning";
}