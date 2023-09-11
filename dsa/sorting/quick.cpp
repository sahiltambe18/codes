#include<iostream>
using namespace std;

void swap(int arr[], int i , int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp ;
}

int partition(int arr[] , int s , int l){
    int pivot = arr[l];
    int i = s-1 ;                          // [ 6 , 3 , 9 , 5 , 2 , 8 , 7]
    for (int j = s ; j < l; j++)
    {
        if (pivot>arr[j])
        {
         i++;
         swap( arr , i , j);   
        }
        
    }
    swap( arr , i+1 , l);
    return(i+1);

}

void quicksort(int arr[] , int s , int l){

    if (s<l)
    {
        int pi = partition(arr , s , l);

        quicksort(arr , s , pi-1);
        quicksort(arr , pi+1 , l);
    }
    
}

int main( )
  {
      int arr[7];
      for (int i = 0; i < 7; i++)
      {
          cout<<"enter no "<<endl;
          cin>>arr[i];
      }
      quicksort(arr , 0 , 7);
            for (int i = 0; i < 7; i++)
      {
          
          cout<<arr[i]<<" ";
      }
return 0 ;
}