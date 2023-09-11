#include <iostream>
using namespace std;
/*
find if given no  is equal to sum of any two elements in array
*/
bool pairsum(int arr[] , int n , int k){
            int low=0;
        int high = n-1 ;
    while(low<high)
    {
        int sum = arr[low]+arr[high];
        if (arr[low]+arr[high]==k){
            cout<< low <<" & "<<high<<endl;
            return true ;
        }
        else if (sum>k)
        {
            high-- ;
        }
        else {
            low++ ;
        }
    }
    return false ;}


int main()
{
    int n = 8;
    int arr[n] = {2, 4, 7, 11, 14, 16, 20, 21};
    // sorting...
for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
// to find sum k
int k = 32;
cout<< pairsum(arr , n , k) ;

    
    
    return 0;
}