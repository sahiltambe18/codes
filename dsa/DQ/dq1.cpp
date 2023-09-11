#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main( )
  {
    int n , k ;
    cout<<"enter length of array and window"<<endl;
    cin>>n>>k;
    vector<int> v(n);
    for(auto &i : v){
        cout<<"enter the element : "<<endl;
        cin>>i;
    }
    deque<int> d ;

    for (int i = 0; i < n-k; i++)
    {
        int m = 0;
        for (int j = 1; j <= k ; j++)
        {
            m = max(m ,v[i+j]);
        }
        
        d.push_back(m);
    }
    for(auto i : d){
        cout<< i <<" ";
    }
    
    

return 0 ;
}