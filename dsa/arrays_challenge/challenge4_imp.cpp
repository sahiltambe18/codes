#include<iostream>
using namespace std;
/*
*****************************************************
*given an array of number of people visited park    *
*condition 1;                                       *
*the number of people visited park is all time high *
*condition 2;                                       *
*all time high is greater than following next day   *
*****************************************************
*/
int main( )
  {
int n=6;
int arr[6]={1,2,0,8,5,7};
int mxx=0;
int i=0;
int days=0;
while(i<n){
    if(arr[i]>mxx && arr[i]>arr[i+1]){
        mxx=(mxx,arr[i]);
        days++;
    }
    i++;
}
    cout<<"max and days are "<<mxx<<" and "<<days<<endl;
mxx;
return 0 ;
}