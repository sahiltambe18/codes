#include<iostream>
using namespace std;
int main( )
  {
int n=6;
int arr[6]={1,2,0,8,5,7};
int mxx=0;
int i=0;
int days=0;
while(i<n){
    if(arr[i]>mxx && arr[i]>arr[i+1]){
        mxx=(mxx,arr[i]);
        days++;
    }
    i++;
}
    cout<<"max and days are "<<mxx<<days<<endl;
mxx;
return 0 ;
}