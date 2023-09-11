#include<iostream>
using namespace std;
int compare(int a[] , int b[]){
    int a_pt = 0;
    int b_pt = 0;
    for (int i = 0; i < 4; i++)
    {
        if (a[i]<b[i])
        {
         b_pt++;   
        }
        else if (a[i]>b[i])
        {
            a_pt++;
        }
        else{
            continue;
        }
    }
    int ans[2]={ a_pt , b_pt};
    int* ptr = &ans ;
    return ptr ;
    
}
int main( )
  {
int a[4]={8,7,11,5};
int b[4]={7,9,10,5};

return 0 ;
}