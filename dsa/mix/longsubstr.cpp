#include<iostream>
using namespace std;
int main( )
  {
    string str = "dagjbckfhfbkcwivehbac";
    string str2 = " ";
    for(auto i : str){
        bool flag = true;
        for(auto j : str2){
            if (i==j)
            {
                flag = false;
                break;
            }
            
        }
        if (flag)
        {
            str2 = str2+i;
        }
        
        
    }
    cout<<str2;
    
return 0 ;
}