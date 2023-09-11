#include<iostream>
using namespace std;
int main( )
  { int n = 12;
  int arr[n] = {5,9,54,54,8,98,78,87,66,661,7,6};
  int i , j;
  int minpos , temp;
  for(i=0;i<n-1 ;i++){
      minpos=i;
      for(j=i+1 ;j<n ;j++){
          if (arr[j] < arr[minpos])
          minpos=j;
      }
      if(minpos != i){
          temp = arr[i];
          arr[i] = arr[minpos];
          arr[minpos] = temp;
      }


  }
for (int x = 0; x < n; x++)
{
    cout<< arr[x]<<" ";
}

  
return 0 ;
}