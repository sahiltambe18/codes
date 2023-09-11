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
int x=99;

bool flag= 0;
for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        if (arr[i][j]==x)
        {
            flag=1;
        cout<<i+1<<" "<<j+1<<endl;
        }
        
    }
}
if (flag= true){
    cout<<"element found !!"<<endl;
}
else{
    cout<<"element not found"<<endl;
}


return 0 ;
}