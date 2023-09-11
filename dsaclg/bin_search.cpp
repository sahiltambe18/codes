#include <iostream>
using namespace std;
void bin_search(int arr[] , int low , int high , int key){
     int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << "element found at " << mid << endl;
            return;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else if (arr[mid]< key)
        {
            low = mid+1;
        }
        
    }
    cout<<"element not found"<<endl;
    return;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int key = 30;
    int low = 0;
    int high = 7;
    // bin_search(arr ,low , high ,key);
     int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << "element found at " << mid << endl;
            break;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else if (arr[mid]< key)
        {
            low = mid+1;
        }
        
    }
   

    return 0;
}