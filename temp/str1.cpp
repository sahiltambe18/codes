#include<iostream>
using namespace std;
void str(string ans){
    string anss = "sahil";
    if (ans == anss)
    {
        cout<<"success";
        return;
    }
    cout<<"fail";
    return;
    
}
int main( )
  {
    string ans ;
    cin>>ans;
    str(ans);

return 0 ;
}