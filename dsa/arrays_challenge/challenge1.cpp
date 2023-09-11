#include<iostream>
using namespace std;
int main( )
  {
int n = 5;
int arr[5]={54,98,-87,56,1111};

int mx= -989446565;
for (int i = 0; i < n; i++)
{
    mx = max(mx , arr[i]);
    cout<< mx<<"  " ;
}

return 0 ;
}