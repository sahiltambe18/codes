#include<iostream>
using namespace std;

// void kadanes(int arr[],int n){
//     int i,j;
//     j = 0;
//     i=1;
//     int res=INT16_MIN;
//     while (i<n && j < n)
//     {
//         int sum = 0;
//         int lower = min(i,j);
//         int upper = max(i,j);

//         for ( int k = lower ; k <= upper ; k++)
//         {
//             sum+=arr[k];
//         }
//         if (sum==res)
//         {
//             i++;
//         }
//         else if (sum>res)
//         {
//             res = sum;
//             i++;
//         }
//         else{
//             j++;
//         }
//      cout<<"max sum is : "<<res<<endl;
//     }
    
// }

void brute(int arr[],int n){
    int res=INT16_MIN;
    for (int i = 0; i < n; i++)
    {
    int sum =0;
        for (int j = i; j < n; j++)
        {
            for(int k = i ; k <j;k++){
                sum+=arr[k];
            }
        }
        res= max(res,sum);
    cout<<"max sum is : "<<res<<endl;
    }
}

int main( )
  {
    int arr[10]={6,-8,3,-2,4,7,0,-6,9,5};
    // kadanes(arr,10);
    brute(arr,10);
return 0 ;
}