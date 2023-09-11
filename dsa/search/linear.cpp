#include<iostream>
using namespace std;

void linear_search(int arr[] ,int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (key==arr[i])
        {
            cout<<"key found at"<<i<<endl;
            return ;
        }
        
    }
    cout<<"key not found"<<endl;
    return;
    
}

int main( )
  {
    int arr[] = {5,9,6,7,3,4,8};
    linear_search(arr , 7 , 3);

return 0 ;
}