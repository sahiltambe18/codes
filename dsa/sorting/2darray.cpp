#include<iostream>
using namespace std;
int main( )
  {
int r,c;
cout<<"enter the size of array"<<endl<<"---> " ;
cin>>r;
cout<<" X ";
cin>>c;
int arr[r][c] ;
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        cout<<"enter A" <<i+1<<j+1<<endl;
                cin>> arr[i][j];
    }
    // cout<<endl;
}

for (int i = 0; i < r; i++)
{
    cout<<"[ ";
    for (int j = 0; j < c; j++)
    {
        cout<< arr[i][j]<<" ";
    }
    cout<<"]" <<endl;
}

return 0 ;
}