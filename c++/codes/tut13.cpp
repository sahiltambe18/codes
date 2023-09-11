#include<iostream>
using namespace std;
int main( )
  {

int marks[]={55,88,99,77,44,66,11,22,33};
// cout<<marks[2];
marks[9]=101;
// arrays are mutable
// for ( int i = 0; i < 10; i++)
// {
//     cout<<"value at index "<<i<<" is "<<marks[i]<<endl;
// }
// int i=0;
// while (i<10)
// {
//     cout<<"value at index "<<i<<" is "<<marks[i]<<endl;
//     i++;
// }
// int i =0;
// do {
    
//     cout<<"value at index "<<i<<" is "<<marks[i]<<endl;
//     i++;
// }while (i<10);

int *p=marks;

cout<<*p<<endl;
cout<<*p+1<<endl;
cout<<*(p+1)<<endl;

// for (int i = 0; i < 10; i++)
// {
//     cout<<(*(p+i))<<endl;
// }



return 0 ;
}