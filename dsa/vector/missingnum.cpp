#include <iostream>
#include <vector>
using namespace std;


/*
9 5
1 1 2 3 5 5 5 10 10
2 4 7 10 10

*/


int missingNumber(vector<int>& nums) {
        vector<int> v ( nums.size()+1 ,0);
        for(int i = 0 ; i < nums.size() ; i++){
            v[ nums[i] ] = 1;
            
        }
        for(int i = 0 ; i < v.size() ; i++){
            if(v[i] != 1){
                return i;
            }
        }
    }

int main()
{
    vector<int> a = {9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(a);
    

    return 0;
}