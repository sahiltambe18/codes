#include<iostream>
using namespace std;
// [4,2,9,7,8,4,1]
//             |
// arr[0]>=arr[1]<=arr[2]>=arr[3]<=arr[4]>=arr[5]<=arr[6]
// middle elements are smaller than neibering elements
//
//  arr[0]        arr[2]        arr[4]        arr[6]   ----> larger ones
//               /              /             /
//         arr[1]        arr[3]        arr[5]      ------> smaller ones
//
void wavesort(int  arr[],int n){
    // int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 1; i < n; i+=2)            
    {                                      
        if (arr[i>arr[i-1]])               
        {                                  
            swap(arr[i],arr[i-1]);
        }
        if (arr[i]>arr[i+1] && i<=n-2)
        {
            swap(arr[i],arr[i+1]);
        }
        
        
    }
    
}

int main( )
  {
      int arr[]={1,3,4,7,5,6,2};
      wavesort(arr , 7);
      for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
      {
          cout<<arr[i]<<",";
      }
      

return 0 ;
}