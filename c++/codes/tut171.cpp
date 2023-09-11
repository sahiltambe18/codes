#include<iostream>
using namespace std;

int principal(int x , cons float intrest =1.07){/* here intrest is a default argument*/
    return x* intrest;                     /* that means if you not give any value of intrest it will take it as 1.07*/
}    /* if you want to make default argument fix use keyword const*/

int main( )
  {
      int a;
cout<<"enter the amout you want to invest"<<endl;
cin>> a;
cout<<"if you invested "<<a <<" in your fd you will get return of 7% --> "<<principal(a)<<" in one year"<<endl;
cout<<"if you invested "<<a <<" in your stocks you will get return of  --> "<<principal(a ,1.15)<<" in one year"<<endl;


return 0 ;
}