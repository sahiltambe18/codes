#include<iostream>
using namespace std;
// find the 1st and last occurense of an element in an array
int occ(int arr[],int n , int i , int key){
    
      if (i==n)
      {
          return -1 ;
      }
      

    if (arr[i]==key)
    {
        return i ;
    }
    
    
    return occ(arr , n-1 , i+1 , key);
}

int main( )
  {
      int arr[]={4,2,1,2,3,2};
      cout<< occ(arr , 6 , 0 , 2);

return 0 ;
}