#include<iostream>
using namespace std;
int main( )
  {
    int n = 5;
    
    for (int i = n; i >=1; i--){
        for(int j = 0 ; j<=n ; j++){
            if (j>=i)
            {
                cout<<'*';
            }
            else{
                cout<<' ';
            }
            
        }
        if (i<= n-1)
        {
            for(int x = 0 ; x< n-1 ; x++){
                for(int y = 0 ; y<=x ; y++){
                    cout<<"*";
                }
                
            }
        }
        
        cout<<endl;
        
    }
    
return 0 ;
}