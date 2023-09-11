#include<iostream>
using namespace std;

/*
     *************************************************************
     *you have given an array and you have to find the length of *
     *longest arithematic array between given array              *
     *************************************************************

     Note: arithematic array is a array in which 
    common diff betn 2 conseucative members is equal 
*/

int main( )
  {
     int n = 5;
    int arr[5] = {5, 9, 13, 17, 21};
    int min=2;  // min length of arithematic array
    int maxx=2 ;   // max length of arithematic array
    int cd= arr[1]-arr[0];  // common diffrence 

    int i=2;
    int j=i;
    while (j<n)
    {
        if (cd= arr[j]- arr[j-1])
        {
            maxx++;
        }
        else
        {
            maxx=2;
        }

        j++;
    }
        maxx= max(maxx,min);
    
    cout<<"max length is "<< maxx;
return 0 ;
}