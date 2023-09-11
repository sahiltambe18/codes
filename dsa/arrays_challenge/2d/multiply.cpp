#include<iostream>
using namespace std;
int main( )
  {

int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
int b[3][3] = {{9,8,7},{6,5,4},{3,2,1}} ;
int ans[3][3] ;
for (int i = 0; i < 3; i++)
{
    for(int j = 0 ; j<3 ; j++)
    {
        ans[i][j] = 0 ;
    }
}

for (int i = 0; i < 3; i++)
{
    for(int j = 0 ; j<3 ; j++)
    {
        for(int x=0 ; x<3 ; x++){
            ans[i][j]+= a[i][x]*b[x][j] ;
        }
    }
}
for (int i = 0; i < 3; i++)
{
    for(int j = 0 ; j<3  ; j++){
        cout<<ans[i][j]<<" ";
    }cout<<endl;
}



return 0 ;
}