#include<iostream>
using namespace std;

int bsearch(int ary[], int l , int k){
    int s = 0;
    int e=l;
    while (s<=e)
    {   
        int mid = s+e/2 ;

        if ( ary[mid]==k )
        {
            return mid ;
        }
        else if ( ary[mid]== k )
        {
            e= mid-1 ;
        }
         else{
             s = mid+1 ;
         }
          
    }
    return - 1 ;
    
}

int main( )
  {
 cout << "enter length" << endl;
    int n;
    cin >> n;
    int ary[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ary[i];
    }
    int key;
    cin >> key;
    cout << bsearch(ary, n, key);
return 0 ;
}