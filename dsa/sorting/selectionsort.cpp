#include <iostream>
using namespace std;
int main()
{
  int n = 5;
  int arr[5] = {88, 75, 56, 88, 23};
  for (int i = 0; i < n-1; i++)
  {
    for(int j = i+1; j<n;j++)
    {
      if(arr[j]<arr[i]){
        int temp;
        temp = arr[j];
        arr[j]= arr[i];
        arr[i]= temp;
      }

    }
  }
  cout<<"ok";
  for( int i=0;i<n;i++){
    cout<< arr[i]<<" ";
  }

  return 0;
}